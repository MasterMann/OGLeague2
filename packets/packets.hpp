#ifndef PACKETS_HPP
#define PACKETS_HPP

#include "wink.hpp"
#include "packets_all.hpp"

struct Packets
{
    wink::signal<wink::slot<void(uint32_t, uint8_t*, size_t)>> OnPacket[7][256];
    void OnNetworkPacket(uint32_t cid, uint8_t channel, uint8_t *data, size_t size)
    {
        switch(channel)
        {
        case CHANNEL_DEFAULT:
        case CHANNEL_GENERIC_APP_BROADCAST:
        case CHANNEL_GENERIC_APP_BROADCAST_UNRELIABLE:
            break;
        case CHANNEL_GENERIC_APP_TO_SERVER:
            OnPacket[CHANNEL_GENERIC_APP_TO_SERVER][data[0]](cid, data, size);
            break;
        case CHANNEL_MIDDLE_TIER_CHAT:
            OnPacket[CHANNEL_MIDDLE_TIER_CHAT][EGP_Chat](cid, data, size);
            break;
        case CHANNEL_MIDDLE_TIER_ROSTER:
            OnPacket[CHANNEL_MIDDLE_TIER_ROSTER][data[0]](cid, data, size);
            break;
        default:
            break;
        }
    }
};


#endif
