#ifndef HPP_086_PKT_SynchSimTimeS2C_HPP
#define HPP_086_PKT_SynchSimTimeS2C_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_SynchSimTimeS2C_s : DefaultPacket<PKT_SynchSimTimeS2C, CHANNEL_GENERIC_APP_BROADCAST>
{
    float synchtime;
};
#pragma pack(pop)

#endif
