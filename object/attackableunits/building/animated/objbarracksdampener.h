#ifndef OBJBARRACKSDAMPENER_H
#define OBJBARRACKSDAMPENER_H

#include "objanimatedbuilding.h"

class ObjBarracksDampener : public ObjAnimatedBuilding
{
protected:
    ReplicationManager mReplicationManager;
public:
    ObjBarracksDampener(World *world);
    void SetupReplicationInfo();
};

#endif // OBJBARRACKSDAMPENER_H
