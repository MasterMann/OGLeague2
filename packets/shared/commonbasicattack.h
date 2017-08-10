#ifndef COMMONBASICATTACK_H
#define COMMONBASICATTACK_H

#include <inttypes.h>
#include "talent.h"

#pragma pack(push, 1)
struct CommonBasicAttack
{
    uint32_t targetNetID;
    char extraTime;
    uint32_t missileNextID;
    char attackSlot;
};
#pragma pack(pop)
#endif // COMMONBASICATTACK_H
