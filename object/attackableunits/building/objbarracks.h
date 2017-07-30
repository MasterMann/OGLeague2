#ifndef OBJBARRACKS_H
#define OBJBARRACKS_H

#include "objbuilding.h"

class ObjBarracks : public ObjBuilding
{
protected:
public:
    ReplicationManager mReplicationManager;
    ObjBarracks(World *world);
    void SetupReplicationInfo();

};

#endif // OBJBARRACKS_H
