#ifndef HPP_140_PKT_OnReplication_HPP
#define HPP_140_PKT_OnReplication_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_OnReplication_s : DefaultPacket<PKT_OnReplication>
{
    uint32_t syncID;
    char count;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct RepHeader
{
  uint8_t setMaps;
  uint32_t networkID;
};
#pragma pack(pop)

#endif
