#ifndef HPP_167_PKT_S2C_TeamSurrenderVote_HPP
#define HPP_167_PKT_S2C_TeamSurrenderVote_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_S2C_TeamSurrenderVote_s : DefaultPacket<PKT_S2C_TeamSurrenderVote>
{
    int8_t vote : 1;
    int8_t firstVote : 1;
    uint32_t playerNetworkID;
    char forVote;
    char againstVote;
    char numPlayers;
    int32_t team;
    float timeOut;
};
#pragma pack(pop)

#endif
