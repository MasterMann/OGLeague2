#ifndef HPP_103_PKT_UpdateGoldRedirectTarget_HPP
#define HPP_103_PKT_UpdateGoldRedirectTarget_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_UpdateGoldRedirectTarget_s : DefaultPacket<PKT_UpdateGoldRedirectTarget>
{
    uint32_t goldRedirectTargetNetID;
};
#pragma pack(pop)

#endif
