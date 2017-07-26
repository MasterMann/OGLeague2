#include "objaiminion.h"
#include "stats/replicationhelper.h"

ObjAiMinion::ObjAiMinion(World *world) : ObjAiBase(world)
{
    mReplicationManager.mBase = this;
    SetupReplicationInfo();
}

void ObjAiMinion::SetupReplicationInfo()
{
    static CReplInfo32 npc_ClientSpecific;
    static CReplInfo32 npc_LocalRepData1;
    static CReplInfo32 npc_LocalRepData2;
    static CReplInfo32 npc_MapRepData;
    static CReplInfo32 npc_OnVisibleRepData;
    mHealth.mCurrent.SetReplicator("mHP", &npc_LocalRepData1, LOCAL_REP_DATA1, &mReplicationManager);
    mPAR.mCurrent.SetReplicator("mMP", &npc_LocalRepData1, LOCAL_REP_DATA1, &mReplicationManager);
    mHealth.mMax.SetReplicator("mMaxHP", &npc_LocalRepData1, LOCAL_REP_DATA1, &mReplicationManager);
    mPAR.mMax.SetReplicator("mMaxMP", &npc_LocalRepData1, LOCAL_REP_DATA1, &mReplicationManager);
    ReplicationHelper::FillLocalRepData(this, &charState, &npc_LocalRepData1, &mReplicationManager);
    ReplicationHelper::FillBasicLocalRepData(&charInterRep, &npc_LocalRepData1, &mReplicationManager);
    ReplicationHelper::FillBasicMapRepData(&charInterRep, &npc_MapRepData, &mReplicationManager);
    mReplicationManager.Init(&npc_ClientSpecific,
                             &npc_LocalRepData1,
                             &npc_LocalRepData2,
                             &npc_MapRepData,
                             &npc_OnVisibleRepData,
                             this);
}
