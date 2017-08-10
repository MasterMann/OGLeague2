#ifndef HPP_066_PKT_World_LockCamera_Server_HPP
#define HPP_066_PKT_World_LockCamera_Server_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_World_LockCamera_Server_s : DefaultPacket<PKT_World_LockCamera_Server>
{
    bool lockCamera;
    uint32_t clientID;
};
#pragma pack(pop)

#endif
