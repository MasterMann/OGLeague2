#ifndef HPP_073_PKT_SynchVersionC2S_HPP
#define HPP_073_PKT_SynchVersionC2S_HPP
#include "../base.h"

#pragma pack(push, 1)
struct PKT_SynchVersionC2S_s : DefaultPacket<PKT_SynchVersionC2S>
{
    float mTime_LastClient;
    uint32_t mClientNetID;
    char mVersionString[256];
};
#pragma pack(pop)

#endif
