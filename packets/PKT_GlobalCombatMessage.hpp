#ifndef HPP_072_PKT_GlobalCombatMessage_HPP
#define HPP_072_PKT_GlobalCombatMessage_HPP
#include "base.hpp"
#include "shared/combatmessage.h"
#pragma pack(push, 1)
struct PKT_GlobalCombatMessage_s : DefaultPacket<PKT_GlobalCombatMessage>
{
    CombatMessage message;
    uint32_t gameObjectNetIdForName;
};
#pragma pack(pop)

#endif
