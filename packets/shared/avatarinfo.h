#ifndef AVATARINFO_H
#define AVATARINFO_H

#include <inttypes.h>
#include "talent.h"

#pragma pack(push, 1)
struct AvatarInfo
{
  uint32_t itemIDs[30];
  uint32_t spellHashes[2];
  Talent TalentsHashes[80];
  char level;
};
#pragma pack(pop)

#endif // AVATARINFO_H
