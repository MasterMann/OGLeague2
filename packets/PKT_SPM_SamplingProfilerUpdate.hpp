#ifndef HPP_080_PKT_SPM_SamplingProfilerUpdate_HPP
#define HPP_080_PKT_SPM_SamplingProfilerUpdate_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_SPM_SamplingProfilerUpdate_s : DefaultPacket<PKT_SPM_SamplingProfilerUpdate>
{
    uint32_t m_EntryCount;
    uint32_t m_SizeOfStringBlock;
};
#pragma pack(pop)

#endif
