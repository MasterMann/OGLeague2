#include "objbarracks.h"
#include "stats/replicationhelper.h"

ObjBarracks::ObjBarracks(World *world) : ObjBuilding(world)
{
    mReplicationManager.mBase = this;
    SetupReplicationInfo();
}

void ObjBarracks::SetupReplicationInfo()
{
    static CReplInfo32 npc_ClientSpecific;
    static CReplInfo32 npc_LocalRepData1;
    static CReplInfo32 npc_LocalRepData2;
    static CReplInfo32 npc_MapRepData;
    static CReplInfo32 npc_OnVisibleRepData;
    ReplicationHelper::FillBuildingLocalRepData(this, &npc_LocalRepData1, &mReplicationManager);
    mReplicationManager.Init(&npc_ClientSpecific,
                             &npc_LocalRepData1,
                             &npc_LocalRepData2,
                             &npc_MapRepData,
                             &npc_OnVisibleRepData,
                             this);
}
