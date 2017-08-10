#ifndef HPP_046_PKT_BuyItemReq_HPP
#define HPP_046_PKT_BuyItemReq_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_BuyItemReq_s : DefaultPacket<PKT_BuyItemReq>
{
    uint32_t itemID;
};
#pragma pack(pop)

#endif
