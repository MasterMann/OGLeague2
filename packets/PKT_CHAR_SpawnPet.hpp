#ifndef HPP_032_PKT_CHAR_SpawnPet_HPP
#define HPP_032_PKT_CHAR_SpawnPet_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_CHAR_SpawnPet_s : DefaultPacket<PKT_CHAR_SpawnPet>
{
  uint32_t netObjID;
  char netNodeID;
  r3dPoint3D pos;
  int32_t castSpellLevelPlusOne;
  float duration;
  int32_t DamageBonus;
  int32_t HealthBonus;
  char name[32];
  char skin[32];
  int32_t skinID;
  char buffName[64];
  uint32_t cloneID;
  int8_t copyInventory : 1;
  char aiscript[32];
};
#pragma pack(pop)

#endif
