#ifndef REPLICATIONHELPER_H
#define REPLICATIONHELPER_H

class AttackableUnit;
class CReplInfo32;
class ReplicationManager;
class CharacterIntermediateRep;
class CharacterState;
struct ReplicationHelper
{
    static void FillBuildingLocalRepData(AttackableUnit *building,
                                         CReplInfo32 *ri, ReplicationManager* manager);
    static void FillBasicLocalRepDataTower(CharacterIntermediateRep *charInter,
                                           CReplInfo32 *ri, ReplicationManager* manager);
    static void FillLocalRepData(AttackableUnit *unit, CharacterState *charState,
                                 CReplInfo32 *ri, ReplicationManager* replicator);
    static void FillBasicMapRepData(CharacterIntermediateRep *charInter, CReplInfo32 *ri,
                                    ReplicationManager* replicator);
    static void FillBasicLocalRepData(CharacterIntermediateRep *charInter, CReplInfo32 *ri,
                                      ReplicationManager* replicator);
    static void FillHeroLocalRepData(CharacterIntermediateRep *charInter, CReplInfo32 *ri,
                                     ReplicationManager* replicator);
    static void FillHeroMapRepData(CharacterIntermediateRep *charInter,  CReplInfo32 *ri,
                                   ReplicationManager* replicator);

};

#endif // REPLICATIONHELPER_H
