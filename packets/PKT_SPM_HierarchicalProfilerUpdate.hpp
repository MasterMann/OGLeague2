#ifndef HPP_077_PKT_SPM_HierarchicalProfilerUpdate_HPP
#define HPP_077_PKT_SPM_HierarchicalProfilerUpdate_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_SPM_HierarchicalProfilerUpdate_s : DefaultPacket<PKT_SPM_HierarchicalProfilerUpdate>
{
    uint32_t m_FrameNum;
    uint32_t m_EntryCount;
};
#pragma pack(pop)

#endif
