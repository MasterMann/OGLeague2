#ifndef HPP_026_PKT_S2C_MapPing_HPP
#define HPP_026_PKT_S2C_MapPing_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_S2C_MapPing_s : DefaultPacket<PKT_S2C_MapPing>
{
    r3dPoint3D pos;
    uint32_t target;
    uint32_t src;
    int8_t bPlayAudio : 1;
    int8_t bShowChat : 1;
};
#pragma pack(pop)

#endif
