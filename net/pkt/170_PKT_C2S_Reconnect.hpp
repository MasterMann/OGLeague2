#ifndef HPP_170_PKT_C2S_Reconnect_HPP
#define HPP_170_PKT_C2S_Reconnect_HPP
#include "../base.h"

#pragma pack(push, 1)
struct PKT_C2S_Reconnect_s : DefaultPacket<PKT_C2S_Reconnect>
{
    bool isFullReconnect;
};
#pragma pack(pop)

#endif
