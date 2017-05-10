#ifndef HPP_128_PKT_C2S_Reconnect_HPP
#define HPP_128_PKT_C2S_Reconnect_HPP
#include "../base.hpp"

#pragma pack(push, 1)
struct PKT_C2S_Reconnect_s : DefaultPacket<PKT_C2S_Reconnect>
{
    bool isFullReconnect;
};
#pragma pack(pop)

#endif
