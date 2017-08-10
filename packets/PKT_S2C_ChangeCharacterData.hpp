#ifndef HPP_104_PKT_S2C_ChangeCharacterData_HPP
#define HPP_104_PKT_S2C_ChangeCharacterData_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_S2C_ChangeCharacterData_s : DefaultPacket<PKT_S2C_ChangeCharacterData>
{
    uint32_t id;
    bool useSpells;
    char skinName[64];
};
#pragma pack(pop)

#endif
