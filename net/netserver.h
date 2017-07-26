#ifndef NetServer_H
#define NetServer_H

#include <vector>
#include <map>
#include <array>
#include <memory>
#include <functional>
#include <iostream>
#include <type_traits>
#include "enet.hpp"
#include "wink.hpp"

class World;
class NetServer
{
protected:
private:
    World *pWorld;
    uint32_t mMax = 0;
    uint32_t mCount = 1;
    ENetAddress mAddress;
    std::map<int, ENetPeer*> mPeers;
    ENetHost* mHost = nullptr;

    bool handleAuth(ENetPeer *peer, ENetPacket *packet);
public:
    NetServer(World *world);
    ~NetServer();
    bool start();
    bool host(uint32_t timeout = 0);

    bool sendPacketRaw(uint32_t cid, uint8_t *pkt, size_t size, uint8_t channel,
                       uint32_t flags = ENET_PACKET_FLAG_RELIABLE);
    void eachClient(std::function<void(uint32_t)> each);
    wink::signal<std::function<void(uint32_t cid)>> OnConnected;
    wink::signal<std::function<void(uint32_t cid)>> OnDisconnected;
};

#endif // NetServer_H
