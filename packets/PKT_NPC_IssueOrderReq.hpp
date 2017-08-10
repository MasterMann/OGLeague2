#ifndef HPP_020_PKT_NPC_IssueOrderReq_HPP
#define HPP_020_PKT_NPC_IssueOrderReq_HPP
#include "base.hpp"
#include "shared/orderinfo.hpp"

#pragma pack(push, 1)
struct PKT_NPC_IssueOrderReq_s : DefaultPacket<PKT_NPC_IssueOrderReq>
{
    OrderInfo info;
};
#pragma pack(pop)

#endif
