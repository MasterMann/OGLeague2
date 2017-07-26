#ifndef SERVERI_H
#define SERVERI_H

#include <functional>
#include "enet.hpp"
#include "wink.hpp"
#include "packetstream.hpp"
#include "common/gameinfo.hpp"

class ServerI
{
protected:
    GameInfo *pGameInfo;
public:
    ServerI() = default;
    virtual ~ServerI() = default;
    virtual bool sendPacketRaw(uint32_t cid,uint8_t *pkt, size_t size, uint8_t channel,
                               uint32_t flags = ENET_PACKET_FLAG_RELIABLE)
    {
        return true;
    }
    virtual bool start(GameInfo *gameinfo)
    {
        pGameInfo = gameinfo;
        return true;
    }
    virtual  bool host(uint32_t timeout)
    {
        return true;
    }
    virtual void eachClient(std::function<void(uint32_t, ServerI*)> each)
    {
    }

    template<class PKT>
    bool sendPacket(uint32_t cid, PKT &pkt)
    {
        return sendPacketRaw(cid, (uint8_t*) &pkt, sizeof(PKT), PKT::CHANNEL, PKT::FLAGS);
    }

    template<class PKT>
    bool sendStream(uint32_t cid, const PacketStream<PKT> &stream)
    {
        auto data = stream.data();
        return sendPacketRaw(cid, &data[0], data.size(), PKT::CHANNEL, PKT::FLAGS);
    }
    wink::signal<wink::slot<void(uint32_t, uint8_t*, size_t)>> OnPacket[7][256];
    wink::signal<std::function<void(uint32_t cid)>> OnConnected;
    wink::signal<std::function<void(uint32_t cid)>> OnDisconnected;
};

#endif // SERVERI_H

