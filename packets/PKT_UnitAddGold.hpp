#ifndef HPP_027_PKT_UnitAddGold_HPP
#define HPP_027_PKT_UnitAddGold_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_UnitAddGold_s : DefaultPacket<PKT_UnitAddGold>
{
    uint32_t targetNetID;
    uint32_t sourceNetID;
    float gold;
};
#pragma pack(pop)

#endif
