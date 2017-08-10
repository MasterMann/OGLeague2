#ifndef HPP_039_PKT_NPC_BuffAddGroup_HPP
#define HPP_039_PKT_NPC_BuffAddGroup_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_NPC_BuffAddGroup_s : DefaultPacket<PKT_NPC_BuffAddGroup>
{
    char buffType;
    uint32_t buffNameHash;
    float runningTime;
    float duration;
    char numInGroup;
};
#pragma pack(pop)

#endif
