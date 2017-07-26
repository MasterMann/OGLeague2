#ifndef NETNOTFIY_H
#define NETNOTFIY_H

#include <inttypes.h>
#include "packetstream.hpp"
#include "world.h"
#include "netserver.h"
#include "enet.hpp"

class World;
class NetNotify
{
protected:
    World *pWorld;
public:
    NetNotify(World *world) : pWorld(world)
    {

    }
    template<typename PKT>
    inline bool sendStream(uint32_t cid, const PacketStream<PKT> &stream,
                           uint8_t channel = PKT::CHANNEL, uint32_t flags = PKT::FLAGS)
    {
        auto d = stream.data();
        return pWorld->server->sendPacketRaw(cid, &d[0], d.size(), channel, flags);
    }

    template<typename PKT>
    inline bool sendPacket(uint32_t cid, const PKT &pkt, uint8_t channel = PKT::CHANNEL,
                           uint32_t flags = PKT::FLAGS)
    {
        return pWorld->server->sendPacketRaw(cid, (uint8_t*) &pkt, sizeof(PKT), channel, flags);
    }
};


#endif // NETNOTFIY_H
