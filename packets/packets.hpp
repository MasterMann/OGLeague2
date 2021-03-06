#ifndef PACKETS_HPP
#define PACKETS_HPP

#include "PKT_Dummy.hpp"
#include "PKT_C2S_ClientConnect_NamedPipe.hpp"
#include "PKT_CHAT.hpp"
#include "PKT_C2S_QueryStatusReq.hpp"
#include "PKT_S2C_QueryStatusAns.hpp"
#include "PKT_S2C_StartSpawn.hpp"
#include "PKT_S2C_CreateHero.hpp"
#include "PKT_S2C_CreateNeutral.hpp"
#include "PKT_S2C_CreateTurret.hpp"
#include "PKT_S2C_PlayAnimation.hpp"
#include "PKT_C2S_PlayEmote.hpp"
#include "PKT_S2C_PlayEmote.hpp"
#include "PKT_S2C_EndSpawn.hpp"
#include "PKT_S2C_StartGame.hpp"
#include "PKT_S2C_EndGame.hpp"
#include "PKT_C2S_CharSelected.hpp"
#include "PKT_C2S_ClientReady.hpp"
#include "PKT_C2S_ClientFinished.hpp"
#include "PKT_NPC_UpgradeSpellReq.hpp"
#include "PKT_NPC_UpgradeSpellAns.hpp"
#include "PKT_NPC_IssueOrderReq.hpp"
#include "PKT_FX_Create_Group.hpp"
#include "PKT_FX_Kill.hpp"
#include "PKT_UnitApplyDamage.hpp"
#include "PKT_Pause.hpp"
#include "PKT_C2S_MapPing.hpp"
#include "PKT_S2C_MapPing.hpp"
#include "PKT_UnitAddGold.hpp"
#include "PKT_UnitAddEXP.hpp"
#include "PKT_UserMessagesStart.hpp"
#include "PKT_NPC_MessageToClient.hpp"
#include "PKT_AI_Command.hpp"
#include "PKT_CHAR_SpawnPet.hpp"
#include "PKT_CHAR_SetCooldown.hpp"
#include "PKT_NPC_Die.hpp"
#include "PKT_NPC_ForceDead.hpp"
#include "PKT_NPC_CastSpellReq.hpp"
#include "PKT_NPC_CastSpellAns.hpp"
#include "PKT_NPC_BuffAdd2.hpp"
#include "PKT_NPC_BuffAddGroup.hpp"
#include "PKT_NPC_BuffReplace.hpp"
#include "PKT_NPC_BuffReplaceGroup.hpp"
#include "PKT_NPC_BuffRemove2.hpp"
#include "PKT_NPC_BuffRemoveGroup.hpp"
#include "PKT_NPC_SetAutocast.hpp"
#include "PKT_SetItem.hpp"
#include "PKT_BuyItemReq.hpp"
#include "PKT_BuyItemAns.hpp"
#include "PKT_RemoveItemReq.hpp"
#include "PKT_RemoveItemAns.hpp"
#include "PKT_SwapItemReq.hpp"
#include "PKT_SwapItemAns.hpp"
#include "PKT_UseItemAns.hpp"
#include "PKT_NPC_LevelUp.hpp"
#include "PKT_NPC_InstantStop_Attack.hpp"
#include "PKT_Barrack_SpawnUnit.hpp"
#include "PKT_Turret_Fire.hpp"
#include "PKT_Turret_CreateTurret.hpp"
#include "pkt32.hpp"
#include "PKT_Basic_Attack.hpp"
#include "PKT_Basic_Attack_Pos.hpp"
#include "PKT_OnEnterVisiblityClient.hpp"
#include "PKT_OnLeaveVisiblityClient.hpp"
#include "PKT_OnEnterLocalVisiblityClient.hpp"
#include "PKT_OnLeaveLocalVisiblityClient.hpp"
#include "PKT_World_SendCamera_Server.hpp"
#include "PKT_World_LockCamera_Server.hpp"
#include "PKT_SendSelectedObjID.hpp"
#include "PKT_UnitApplyHeal.hpp"
#include "PKT_MissileReplication.hpp"
#include "PKT_ServerTick.hpp"
#include "PKT_DampenerSwitch.hpp"
#include "PKT_GlobalCombatMessage.hpp"
#include "PKT_SynchVersionC2S.hpp"
#include "PKT_SynchVersionS2C.hpp"
#include "PKT_AI_TargetS2C.hpp"
#include "PKT_AI_TargetHeroS2C.hpp"
#include "PKT_SPM_HierarchicalProfilerUpdate.hpp"
#include "PKT_SPM_HierarchicalMemoryUpdate.hpp"
#include "PKT_SPM_HierarchicalBBProfileUpdate.hpp"
#include "PKT_SPM_SamplingProfilerUpdate.hpp"
#include "PKT_SPM_AddBBProfileListener.hpp"
#include "PKT_SPM_RemoveBBProfileListener.hpp"
#include "PKT_HeroReincarnateAlive.hpp"
#include "PKT_HeroReincarnate.hpp"
#include "PKT_Building_Die.hpp"
#include "PKT_SynchSimTimeS2C.hpp"
#include "PKT_SynchSimTimeC2S.hpp"
#include "PKT_SyncSimTimeFinalS2C.hpp"
#include "PKT_WaypointList.hpp"
#include "PKT_WaypointListHeroWithSpeed.hpp"
#include "PKT_ServerGameSettings.hpp"
#include "PKT_NPC_BuffUpdateCount.hpp"
#include "PKT_NPC_BuffUpdateCountGroup.hpp"
#include "PKT_C2S_PlayEmoticon.hpp"
#include "PKT_S2C_PlayEmoticon.hpp"
#include "PKT_AvatarInfo_Server.hpp"
#include "PKT_RemovePerceptionBubble.hpp"
#include "PKT_AddUnitPerceptionBubble.hpp"
#include "PKT_AddPosPerceptionBubble.hpp"
#include "PKT_SpawnMinionS2C.hpp"
#include "PKT_S2C_StopAnimation.hpp"
#include "PKT_S2C_ShowHealthBar.hpp"
#include "PKT_UpdateGoldRedirectTarget.hpp"
#include "PKT_S2C_ChangeCharacterData.hpp"
#include "PKT_S2C_PopCharacterData.hpp"
#include "PKT_S2C_PopAllCharacterData.hpp"
#include "PKT_S2C_FaceDirection.hpp"
#include "PKT_S2C_CameraBehavior.hpp"
#include "PKT_SPM_AddListener.hpp"
#include "PKT_SPM_RemoveListener.hpp"
#include "PKT_SPM_AddMemoryListener.hpp"
#include "PKT_SPM_RemoveMemoryListener.hpp"
#include "PKT_S2C_DestroyClientMissile.hpp"
#include "PKT_S2C_ChainMissileSync.hpp"
#include "PKT_MissileReplication_ChainMissile.hpp"
#include "PKT_S2C_BotAI.hpp"
#include "PKT_S2C_AI_TargetSelection.hpp"
#include "PKT_S2C_AI_State.hpp"
#include "PKT_OnEvent.hpp"
#include "PKT_OnDisconnected.hpp"
#include "PKT_World_SendCamera_Server_Acknologment.hpp"
#include "PKT_World_SendGameNumber.hpp"
#include "PKT_NPC_Die_EventHistroy.hpp"
#include "PKT_C2S_Ping_Load_Info.hpp"
#include "PKT_S2C_Ping_Load_Info.hpp"
#include "PKT_C2S_Exit.hpp"
#include "PKT_S2C_Exit.hpp"
#include "PKT_C2S_Reconnect.hpp"
#include "PKT_S2C_Reconnect.hpp"
#include "PKT_S2C_Reconnect_Done.hpp"
#include "PKT_Waypoint_Acc.hpp"
#include "PKT_WaypointGroup.hpp"
#include "PKT_WaypointGroupWithSpeed.hpp"
#include "PKT_Connected.hpp"
#include "PKT_S2C_ToggleInputLockingFlag.hpp"
#include "PKT_S2C_ToggleFoW.hpp"
#include "PKT_S2C_ToggleFoWOn.hpp"
#include "PKT_S2C_SetCircularCameraRestriction.hpp"
#include "PKT_S2C_LockCamera.hpp"
#include "PKT_OnReplication.hpp"
#include "PKT_OnReplication_Acc.hpp"
#include "PKT_S2C_MoveCameraToPoint.hpp"
#include "PKT_S2C_PlayTutorialAudioEvent.hpp"
#include "PKT_ChangeSlotSpellType.hpp"
#include "PKT_PausePacket.hpp"
#include "PKT_ResumePacket.hpp"
#include "PKT_SetFrequency.hpp"
#include "PKT_SetFadeOut_Push.hpp"
#include "PKT_SetFadeOut_Pop.hpp"
#include "PKT_S2C_CreateUnitHighlight.hpp"
#include "PKT_S2C_RemoveUnitHighlight.hpp"
#include "PKT_S2C_OpenTutorialPopup.hpp"
#include "PKT_C2S_OnTutorialPopupClosed.hpp"
#include "PKT_S2C_OpenAFKWarningMessage.hpp"
#include "PKT_S2C_CloseShop.hpp"
#include "PKT_S2C_SetInputLockingFlag.hpp"
#include "PKT_C2S_OnShopOpened.hpp"
#include "PKT_S2C_ShowObjectiveText.hpp"
#include "PKT_S2C_HideObjectiveText.hpp"
#include "PKT_S2C_RefreshObjectiveText.hpp"
#include "PKT_S2C_ShowAuxiliaryText.hpp"
#include "PKT_S2C_HideAuxiliaryText.hpp"
#include "PKT_S2C_RefreshAuxiliaryText.hpp"
#include "PKT_S2C_HighlightHUDElement.hpp"
#include "PKT_S2C_HighlightShopElement.hpp"
#include "PKT_C2S_TeamSurrenderVote.hpp"
#include "PKT_S2C_TeamSurrenderVote.hpp"
#include "PKT_S2C_TeamSurrenderCountDown.hpp"
#include "PKT_S2C_TeamSurrenderStatus.hpp"
#include "PKT_S2C_LineMissileHitList.hpp"
#include "PKT_C2S_TutorialAudioEventFinished.hpp"
#include "PKT_S2C_HighlightTitanBarElement.hpp"
#include "PKT_S2C_ToggleUIHighlight.hpp"
#include "PKT_S2C_DisplayLocalizedTutorialChatText.hpp"
#include "PKT_S2C_ToolTipVars.hpp"
#include "PKT_S2C_MuteVolumeCategory.hpp"
#include "PKT_S2C_OnEventWorld.hpp"
#include "PKT_S2C_AnimatedBuildingSetCurrentSkin.hpp"
#include "PKT_S2C_SetGreyscaleEnabledWhenDead.hpp"
#include "PKT_S2C_DisableHUDForEndOfGame.hpp"
#include "PKT_ChangeSlotSpellName.hpp"
#include "PKT_S2C_SwitchNexusesToOnIdleParticles.hpp"
#include "PKT_S2C_FadeMinions.hpp"
#include "PKT_S2C_FadeOutMainSFX.hpp"
#include "PKT_S2C_HeroStats.hpp"
#include "PKT_S2C_SetAnimStates.hpp"
#include "PKT_ClientCheatDetectionSignal.hpp"
#include "PKT_S2C_AddDebugCircle.hpp"
#include "PKT_S2C_RemoveDebugCircle.hpp"
#include "PKT_S2C_ModifyDebugCircleRadius.hpp"
#include "PKT_S2C_ModifyDebugCircleColor.hpp"
#include "PKT_Undefined.hpp"
#include "PKT_S2C_Neutral_Camp_Empty.hpp"
#include "PKT_ResetForSlowLoader.hpp"
#include "PKT_Batched.hpp"

#include "EGP_chat.hpp"
#include "EGP_requestjointeam.hpp"
#include "EGP_requestreskin.hpp"
#include "EGP_requestrename.hpp"
#include "EGP_teamrosterupdate.hpp"

#endif
