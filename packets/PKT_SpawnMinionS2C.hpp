#ifndef HPP_100_PKT_SpawnMinionS2C_HPP
#define HPP_100_PKT_SpawnMinionS2C_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_SpawnMinionS2C_s : DefaultPacket<PKT_SpawnMinionS2C>
{
    uint32_t netObjID;
    char netNodeID;
    r3dPoint3D Pos;
    char Name[64];
    char SkinName[64];
    int32_t skinID;
    uint32_t CloneID;
    int32_t TeamID : 9;
    int8_t IgnoreCollision : 1;
};
#pragma pack(pop)

#endif
