#ifndef SCRIPTHELPERBB_H
#define SCRIPTHELPERBB_H

#include "dep/sol.hpp"
#include "dep/r3d.hpp"

struct ScriptHelperBB
{
    static void RegisterGlobals(sol::state &state);

    static void BBSetCameraPosition(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIsPathable(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBTeleportToKeyLocation(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBTeleportToPosition(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetNearestPassablePosition(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBForEachUnitInTargetAreaAddBuff(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBForEachUnitInTargetArea(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBForEachUnitInTargetAreaRandom(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBForNClosestUnitsInTargetArea(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBForEachChampion(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBForEachUnitInTargetRectangle(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBGetRandomPointInAreaUnit(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetRandomPointInAreaPosition(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetUnitPosition(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetSkinID(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetPointByUnitFacingOffset(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetMissilePosFromID(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBModifyPosition(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncFlatPARPoolMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncFlatPARRegenMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncPercentPARPoolMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncPercentPARRegenMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncPermanentFlatPARPoolMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncPermanentFlatPARRegenMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncPermanentPercentPARPoolMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncPermanentPercentPARRegenMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetFlatPARPoolMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetFlatPARRegenMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetPercentPARPoolMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetPercentPARRegenMod(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyDamage(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyStun(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyPacified(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyNet(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyDisarm(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplySuppression(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplySilence(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyRoot(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyTaunt(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyCharm(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyFear(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplySleep(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyNearSight(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyNoRender(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyForceRenderParticles(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyStealth(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyRevealSpecificUnit(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplySuppressCallForHelp(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyCallForHelpSuppresser(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyIgnoreCallForHelp(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncPAR(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncGold(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static float BBLuaGetGold(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncHealth(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBDrawDefaultHitEffects(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetCastSpellTargetPos(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBAdjustCastInfoCenterAOE(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpawnPet(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpawnMinion(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBCloneUnit(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBCloneUnitPet(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncExp(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBForEachPetInTarget(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBSetDodgePiercing(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetStateDisableAmbientGold(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetStunned(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetPacified(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetNetted(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetDisarmed(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetRooted(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetSuppressCallForHelp(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetCallForHelpSuppresser(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBRedirectGold(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetTargetingType(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetSpell(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetBuffCasterUnit(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetTriggerUnit(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetUnit(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBInvalidateUnit(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBForceDead(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetIgnoreCallForHelp(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpellBuffAdd(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBTimeChannelTickExecute(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBBreak(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBSpellBuffRemoveType(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpellBuffRemove(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpellBuffRemoveCurrent(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpellBuffClear(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetBuffRemainingDuration(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpellEffectCreate(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpellEffectRemove(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBStopChanneling(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBStopMove(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBMove(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBMoveAway(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBDestroyMissile(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBDestroyMissileForTarget(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSpellCast(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBCancelAutoAttack(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBOverrideAutoAttack(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBRemoveOverrideAutoAttack(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetAutoAttackTargetingFlags(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetPetReturnRadius(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBCreateItem(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSealSpellSlot(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetBuffToolTipVar(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetSpellToolTipVar(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBLinkVisibility(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIsInBrush(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetHeightDifference(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBRemoveLinkVisibility(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetNearSight(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetNearSight(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetPetOwner(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBStartTrackingCollisions(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBStopMoveBlock(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBStopCurrentOverrideAnimation(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPreloadCharacter(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPreloadParticle(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPreloadSpell(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBDispellPositiveBuffs(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBDispellNegativeBuffs(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBRemovePerceptionBubble(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBAddUnitPerceptionBubble(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBAddPosPerceptionBubble(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPlayAnimation(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBUnlockAnimation(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetNumberOfHeroesOnTeam(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBCanSeeTarget(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPushCharacterData(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetSlotSpellCooldownTimeVer2(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPopCharacterData(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPopAllCharacterData(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPushCharacterFade(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPopCharacterFade(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBForEachPointAroundCircle(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBSetCharacterDebugRadius(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBForEachPointOnLine(sol::stack_object passThrough, sol::stack_object perBlockParams, sol::stack_object subBlocks){}
    static void BBFaceDirection(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetGameTime(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetChampionBySkinName(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBPauseAnimation(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBEnableWallOfGrassTracking(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBShowHealthBar(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBClearOverrideAnimation(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBOverrideAnimation(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncSpellLevel(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetPARCostInc(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetPARCostInc(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetPARMultiplicativeCostInc(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetPARMultiplicativeCostInc(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSetInCastTable(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBOverrideCastRange(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetCastRange(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBAddDebugCircle(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBRemoveDebugCircle(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBModifyDebugCircleRadius(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBModifyDebugCircleColor(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBApplyAssistMarker(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBSkipNextAutoAttack(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBIncMaxHealth(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static void BBGetIsZombie(sol::stack_object passThrough, sol::stack_object perBlockParams){}
    static float GetCFParam(sol::stack_object passThrough, sol::stack_object perBlockParams, std::string parramName){}
};

#endif // SCRIPTHELPERBB_H
