#ifndef HPP_025_PKT_C2S_MapPing_HPP
#define HPP_025_PKT_C2S_MapPing_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_C2S_MapPing_s : DefaultPacket<PKT_C2S_MapPing>
{
    r3dPoint3D pos;
    uint32_t target;
};
#pragma pack(pop)

#endif
