#include "netserver.h"
#include "world.h"
#include "common/gameinfo.hpp"
#include "packets/packets.hpp"

namespace
{
struct PKT_KeyCheck_s : NetBasePacket<0, CHANNEL_DEFAULT,
        ENET_PACKET_FLAG_RELIABLE>
{
    uint8_t cmd;
    uint32_t clientID;
    uint64_t playerID;
    uint64_t checkId;
};
}

NetServer::NetServer(World *world) : pWorld(world)
{
}

NetServer::~NetServer()
{
    if(mHost != nullptr)
        enet_host_destroy(mHost);
}

bool NetServer::start()
{
    mMax = pWorld->gameinfo->getHumans();
    mAddress.host = pWorld->gameinfo->address;
    mAddress.port = pWorld->gameinfo->port;
    mHost = enet_host_create(&mAddress, 32, 0, 0);
    return mHost != nullptr;
}

bool NetServer::host(uint32_t timeout)
{
    ENetEvent event;
    if(mHost == nullptr)
        return false;
    while(enet_host_service(mHost, &event, timeout) != 0)
    {
        switch(event.type)
        {
        case ENET_EVENT_TYPE_CONNECT:
            event.peer->data = 0;
            event.peer->mtu = 996;
            break;
        case ENET_EVENT_TYPE_DISCONNECT:
            if((uint64_t)(event.peer->data) > 0)
            {
                mCount--;
                mPeers[(uint64_t)(event.peer->data)] = 0;
                OnDisconnected((uint64_t)(event.peer->data));
            }
            break;
        case ENET_EVENT_TYPE_RECEIVE:
            if((uint64_t)(event.peer->data) > 0)
            {
                if(event.channelID >= CHANNEL_NUM_TOTAL)
                    break;
                if(event.packet->dataLength >= 8)
                    pWorld->gameinfo->blowfish.Decrypt(event.packet->data,
                                                       event.packet->dataLength
                                                       -(event.packet->dataLength%8));
                pWorld->packets->OnNetworkPacket((uint64_t)(event.peer->data), event.channelID,
                                                 (uint8_t*)(event.packet->data),
                                                 event.packet->dataLength);
            }
            else
            {
                handleAuth(event.peer, event.packet);
            }
            enet_packet_destroy(event.packet);
            break;
        }
    }
    return true;
}

bool NetServer::sendPacketRaw(uint32_t cid, uint8_t *pkt, size_t size, uint8_t channel,
                              uint32_t flags)
{
    if(cid > mMax)
        return false;
    ENetPeer *peer = mPeers[cid];
    if(peer == nullptr)
        return false;
    ENetPacket *packet = enet_packet_create(pkt, size, flags);
    if(size >= 8)
        pWorld->gameinfo->blowfish.Encrypt(packet->data, size-(size%8));
    enet_peer_send(peer, channel, packet);
    return true;
}

void NetServer::eachClient(std::function<void(uint32_t)> each)
{
    for(auto p: mPeers)
        if(p.second != nullptr)
            each(p.first);
}

bool NetServer::handleAuth(ENetPeer *peer, ENetPacket *packet)
{
    PKT_KeyCheck_s *pkt = (PKT_KeyCheck_s *) (packet->data);
    if(mCount > mMax )
        return false;
    if(packet->dataLength != sizeof(PKT_KeyCheck_s))
        return false;
    if(pWorld->gameinfo->blowfish.Decrypt(pkt->checkId) != pkt->playerID)
        return false;
    if(pWorld->gameinfo->blowfish.Encrypt(pkt->playerID) != pkt->checkId)
        return false;
    if(pkt->playerID > mMax)
        return false;
    if(mPeers[pkt->playerID] != nullptr)
        return false;

    mCount++;
    mPeers[pkt->playerID] = peer;
    peer->data = (void*)(pkt->playerID);

    PKT_KeyCheck_s rpkt;
    rpkt.cmd = 0;
    rpkt.clientID = pkt->playerID;
    rpkt.playerID = pkt->playerID;
    rpkt.checkId = pkt->checkId;
    //sendPacket(pkt->playerID, rpkt);
    sendPacketRaw(pkt->playerID, (uint8_t*) &rpkt, sizeof(rpkt),
                  CHANNEL_DEFAULT, ENET_PACKET_FLAG_RELIABLE);
    OnConnected(pkt->playerID);
    return true;
}
