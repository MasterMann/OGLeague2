#ifndef HPP_127_PKT_S2C_Exit_HPP
#define HPP_127_PKT_S2C_Exit_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_S2C_Exit_s : DefaultPacket<PKT_S2C_Exit>
{
    uint32_t cid;
};
#pragma pack(pop)

#endif
