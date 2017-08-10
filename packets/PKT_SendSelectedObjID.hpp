#ifndef HPP_067_PKT_SendSelectedObjID_HPP
#define HPP_067_PKT_SendSelectedObjID_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_SendSelectedObjID_s : DefaultPacket<PKT_SendSelectedObjID>
{
    uint32_t clientID;
    uint32_t selectedNetworkID;
};
#pragma pack(pop)

#endif
