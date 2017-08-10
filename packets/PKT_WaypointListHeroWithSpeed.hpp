#ifndef HPP_090_PKT_WaypointListHeroWithSpeed_HPP
#define HPP_090_PKT_WaypointListHeroWithSpeed_HPP
#include "base.hpp"
#include "shared/speedparams.hpp"

#pragma pack(push, 1)
struct PKT_WaypointListHeroWithSpeed_s : DefaultPacket<PKT_WaypointListHeroWithSpeed>
{
    int32_t syncID;
    SpeedParms speedParams;
};
#pragma pack(pop)

#endif
