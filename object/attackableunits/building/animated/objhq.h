#ifndef OBJHQ_H
#define OBJHQ_H

#include "objanimatedbuilding.h"

class ObjHQ : public ObjAnimatedBuilding
{
protected:
public:
    ReplicationManager mReplicationManager;
    ObjHQ(World *world);
    void SetupReplicationInfo();
};

#endif // OBJHQ_H
