TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    dep/blowfish/base64.cpp \
    dep/blowfish/blowfish.cpp \
    dep/enet/callbacks.c \
    dep/enet/host.c \
    dep/enet/list.c \
    dep/enet/packet.c \
    dep/enet/peer.c \
    dep/enet/protocol.c \
    dep/enet/unix.c \
    dep/enet/win32.c \
    dep/lua/lapi.c \
    dep/lua/lauxlib.c \
    dep/lua/lbaselib.c \
    dep/lua/lcode.c \
    dep/lua/ldblib.c \
    dep/lua/ldebug.c \
    dep/lua/ldo.c \
    dep/lua/ldump.c \
    dep/lua/lfunc.c \
    dep/lua/lgc.c \
    dep/lua/linit.c \
    dep/lua/liolib.c \
    dep/lua/llex.c \
    dep/lua/lmathlib.c \
    dep/lua/lmem.c \
    dep/lua/loadlib.c \
    dep/lua/lobject.c \
    dep/lua/lopcodes.c \
    dep/lua/loslib.c \
    dep/lua/lparser.c \
    dep/lua/lstate.c \
    dep/lua/lstring.c \
    dep/lua/lstrlib.c \
    dep/lua/ltable.c \
    dep/lua/ltablib.c \
    dep/lua/ltm.c \
    dep/lua/lundump.c \
    dep/lua/lvm.c \
    dep/lua/lzio.c \
    obj/gameobject.cpp \
    obj/attackableunits/attackableunit.cpp \
    obj/attackableunits/ai/objaibase.cpp \
    obj/attackableunits/ai/objaihero.cpp \
    obj/attackableunits/ai/objaiminion.cpp \
    obj/attackableunits/ai/objaiturret.cpp \
    obj/attackableunits/building/objbuilding.cpp \
    obj/attackableunits/building/objbarracks.cpp \
    obj/attackableunits/building/objspawnpoint.cpp \
    obj/attackableunits/building/objlevelsizer.cpp \
    obj/attackableunits/building/animated/objanimatedbuilding.cpp \
    obj/attackableunits/building/animated/objbarracksdampener.cpp \
    obj/attackableunits/building/animated/objhq.cpp \
    obj/attackableunits/building/animated/objturret.cpp \
    obj/attackableunits/building/objshop.cpp \
    obj/attackableunits/building/objlake.cpp \
    obj/attackableunits/building/objnavpoint.cpp \
    obj/spellmissile/objspellmissile.cpp \
    main.cpp \
    objectmanager.cpp \
    world.cpp

HEADERS += \
    dep/blowfish/base64.h \
    dep/blowfish/blowfish.h \
    dep/enet/callbacks.h \
    dep/enet/enet.h \
    dep/enet/list.h \
    dep/enet/protocol.h \
    dep/enet/time.h \
    dep/enet/types.h \
    dep/enet/unix.h \
    dep/enet/utility.h \
    dep/enet/win32.h \
    dep/lua/lapi.h \
    dep/lua/lauxlib.h \
    dep/lua/lcode.h \
    dep/lua/ldebug.h \
    dep/lua/ldo.h \
    dep/lua/lfunc.h \
    dep/lua/lgc.h \
    dep/lua/llex.h \
    dep/lua/llimits.h \
    dep/lua/lmem.h \
    dep/lua/lobject.h \
    dep/lua/lopcodes.h \
    dep/lua/lparser.h \
    dep/lua/lstate.h \
    dep/lua/lstring.h \
    dep/lua/ltable.h \
    dep/lua/ltm.h \
    dep/lua/lua.h \
    dep/lua/lua.hpp \
    dep/lua/luaconf.h \
    dep/lua/lualib.h \
    dep/lua/lundump.h \
    dep/lua/lvm.h \
    dep/lua/lzio.h \
    dep/lua/sol.hpp \
    dep/wink/detail/FastDelegate.h \
    dep/wink/detail/FastDelegateBind.h \
    dep/wink/event_queue.hpp \
    dep/wink/signal.hpp \
    dep/wink/slot.hpp \
    dep/blowfish.hpp \
    dep/crc32.hpp \
    dep/enet.hpp \
    dep/sol.hpp \
    dep/wink.hpp \
    dep/buffer.hpp \
    net/packets.hpp \
    net/egp/64_egp_requestjointeam.h \
    net/egp/66_egp_requestrename.h \
    net/egp/65_egp_requestreskin.h \
    net/egp/67_egp_teamrosterupdate.h \
    net/egp/egp_chat.h \
    dep/r3d/r3dbox3d.h \
    dep/r3d/r3dfile.h \
    dep/r3d/r3dmesh.h \
    dep/r3d/r3dpoint.h \
    dep/r3d.hpp \
    obj/gameobject.h \
    obj/attackableunits/attackableunit.h \
    obj/attackableunits/ai/objaibase.h \
    obj/attackableunits/ai/objaihero.h \
    obj/attackableunits/ai/objaiminion.h \
    obj/attackableunits/ai/objaiturret.h \
    common/team_e.h \
    obj/attackableunits/building/objbuilding.h \
    obj/attackableunits/building/objbarracks.h \
    obj/attackableunits/building/objspawnpoint.h \
    obj/attackableunits/building/objlevelsizer.h \
    obj/attackableunits/building/animated/objanimatedbuilding.h \
    obj/attackableunits/building/animated/objbarracksdampener.h \
    obj/attackableunits/building/animated/objhq.h \
    obj/attackableunits/building/animated/objturret.h \
    obj/attackableunits/building/objshop.h \
    obj/attackableunits/building/objlake.h \
    obj/attackableunits/building/objnavpoint.h \
    obj/spellmissile/objspellmissile.h \
    obj/gameobjectsall.h \
    net/pkt/000_PKT_Dummy.hpp \
    net/pkt/001_PKT_C2S_ClientConnect_NamedPipe.hpp \
    net/pkt/002_PKT_CHAT.hpp \
    net/pkt/003_PKT_C2S_QueryStatusReq.hpp \
    net/pkt/004_PKT_S2C_QueryStatusAns.hpp \
    net/pkt/005_PKT_S2C_StartSpawn.hpp \
    net/pkt/006_PKT_S2C_CreateHero.hpp \
    net/pkt/007_PKT_S2C_CreateNeutral.hpp \
    net/pkt/008_PKT_S2C_CreateTurret.hpp \
    net/pkt/009_PKT_S2C_PlayAnimation.hpp \
    net/pkt/010_PKT_C2S_PlayEmote.hpp \
    net/pkt/011_PKT_S2C_PlayEmote.hpp \
    net/pkt/012_PKT_S2C_EndSpawn.hpp \
    net/pkt/013_PKT_S2C_StartGame.hpp \
    net/pkt/014_PKT_S2C_EndGame.hpp \
    net/pkt/015_PKT_C2S_CharSelected.hpp \
    net/pkt/016_PKT_C2S_ClientReady.hpp \
    net/pkt/017_PKT_C2S_ClientFinished.hpp \
    net/pkt/018_PKT_NPC_UpgradeSpellReq.hpp \
    net/pkt/019_PKT_NPC_UpgradeSpellAns.hpp \
    net/pkt/020_PKT_NPC_IssueOrderReq.hpp \
    net/pkt/021_PKT_FX_Create_Group.hpp \
    net/pkt/022_PKT_FX_Kill.hpp \
    net/pkt/023_PKT_UnitApplyDamage.hpp \
    net/pkt/024_PKT_Pause.hpp \
    net/pkt/025_PKT_C2S_MapPing.hpp \
    net/pkt/026_PKT_S2C_MapPing.hpp \
    net/pkt/027_PKT_UnitAddGold.hpp \
    net/pkt/028_PKT_UnitAddEXP.hpp \
    net/pkt/029_PKT_UserMessagesStart.hpp \
    net/pkt/030_PKT_NPC_MessageToClient.hpp \
    net/pkt/031_PKT_AI_Command.hpp \
    net/pkt/032_PKT_CHAR_SpawnPet.hpp \
    net/pkt/033_PKT_CHAR_SetCooldown.hpp \
    net/pkt/034_PKT_NPC_Die.hpp \
    net/pkt/035_PKT_NPC_ForceDead.hpp \
    net/pkt/036_PKT_NPC_CastSpellReq.hpp \
    net/pkt/037_PKT_NPC_CastSpellAns.hpp \
    net/pkt/038_PKT_NPC_BuffAdd2.hpp \
    net/pkt/039_PKT_NPC_BuffAddGroup.hpp \
    net/pkt/040_PKT_NPC_BuffReplace.hpp \
    net/pkt/041_PKT_NPC_BuffReplaceGroup.hpp \
    net/pkt/042_PKT_NPC_BuffRemove2.hpp \
    net/pkt/043_PKT_NPC_BuffRemoveGroup.hpp \
    net/pkt/044_PKT_NPC_SetAutocast.hpp \
    net/pkt/045_PKT_SetItem.hpp \
    net/pkt/046_PKT_BuyItemReq.hpp \
    net/pkt/047_PKT_BuyItemAns.hpp \
    net/pkt/048_PKT_RemoveItemReq.hpp \
    net/pkt/049_PKT_RemoveItemAns.hpp \
    net/pkt/050_PKT_SwapItemReq.hpp \
    net/pkt/051_PKT_SwapItemAns.hpp \
    net/pkt/052_PKT_UseItemAns.hpp \
    net/pkt/053_PKT_NPC_LevelUp.hpp \
    net/pkt/054_PKT_NPC_InstantStop_Attack.hpp \
    net/pkt/055_PKT_Barrack_SpawnUnit.hpp \
    net/pkt/056_PKT_Turret_Fire.hpp \
    net/pkt/057_PKT_Turret_CreateTurret.hpp \
    net/pkt/058_pkt32.hpp \
    net/pkt/059_PKT_Basic_Attack.hpp \
    net/pkt/060_PKT_Basic_Attack_Pos.hpp \
    net/pkt/061_PKT_OnEnterVisiblityClient.hpp \
    net/pkt/062_PKT_OnLeaveVisiblityClient.hpp \
    net/pkt/063_PKT_OnEnterLocalVisiblityClient.hpp \
    net/pkt/064_PKT_OnLeaveLocalVisiblityClient.hpp \
    net/pkt/065_PKT_World_SendCamera_Server.hpp \
    net/pkt/066_PKT_World_LockCamera_Server.hpp \
    net/pkt/067_PKT_SendSelectedObjID.hpp \
    net/pkt/068_PKT_UnitApplyHeal.hpp \
    net/pkt/069_PKT_MissileReplication.hpp \
    net/pkt/070_PKT_ServerTick.hpp \
    net/pkt/071_PKT_DampenerSwitch.hpp \
    net/pkt/072_PKT_GlobalCombatMessage.hpp \
    net/pkt/073_PKT_SynchVersionC2S.hpp \
    net/pkt/074_PKT_SynchVersionS2C.hpp \
    net/pkt/075_PKT_AI_TargetS2C.hpp \
    net/pkt/076_PKT_AI_TargetHeroS2C.hpp \
    net/pkt/077_PKT_SPM_HierarchicalProfilerUpdate.hpp \
    net/pkt/078_PKT_SPM_HierarchicalMemoryUpdate.hpp \
    net/pkt/079_PKT_SPM_HierarchicalBBProfileUpdate.hpp \
    net/pkt/080_PKT_SPM_SamplingProfilerUpdate.hpp \
    net/pkt/081_PKT_SPM_AddBBProfileListener.hpp \
    net/pkt/082_PKT_SPM_RemoveBBProfileListener.hpp \
    net/pkt/083_PKT_HeroReincarnateAlive.hpp \
    net/pkt/084_PKT_HeroReincarnate.hpp \
    net/pkt/085_PKT_Building_Die.hpp \
    net/pkt/086_PKT_SynchSimTimeS2C.hpp \
    net/pkt/087_PKT_SynchSimTimeC2S.hpp \
    net/pkt/088_PKT_SyncSimTimeFinalS2C.hpp \
    net/pkt/089_PKT_WaypointList.hpp \
    net/pkt/090_PKT_WaypointListHeroWithSpeed.hpp \
    net/pkt/091_PKT_ServerGameSettings.hpp \
    net/pkt/092_PKT_NPC_BuffUpdateCount.hpp \
    net/pkt/093_PKT_NPC_BuffUpdateCountGroup.hpp \
    net/pkt/094_PKT_C2S_PlayEmoticon.hpp \
    net/pkt/095_PKT_S2C_PlayEmoticon.hpp \
    net/pkt/096_PKT_AvatarInfo_Server.hpp \
    net/pkt/097_PKT_RemovePerceptionBubble.hpp \
    net/pkt/098_PKT_AddUnitPerceptionBubble.hpp \
    net/pkt/099_PKT_AddPosPerceptionBubble.hpp \
    net/pkt/100_PKT_SpawnMinionS2C.hpp \
    net/pkt/101_PKT_S2C_StopAnimation.hpp \
    net/pkt/102_PKT_S2C_ShowHealthBar.hpp \
    net/pkt/103_PKT_UpdateGoldRedirectTarget.hpp \
    net/pkt/104_PKT_S2C_ChangeCharacterData.hpp \
    net/pkt/105_PKT_S2C_PopCharacterData.hpp \
    net/pkt/106_PKT_S2C_PopAllCharacterData.hpp \
    net/pkt/107_PKT_S2C_FaceDirection.hpp \
    net/pkt/108_PKT_S2C_CameraBehavior.hpp \
    net/pkt/109_PKT_SPM_AddListener.hpp \
    net/pkt/110_PKT_SPM_RemoveListener.hpp \
    net/pkt/111_PKT_SPM_AddMemoryListener.hpp \
    net/pkt/112_PKT_SPM_RemoveMemoryListener.hpp \
    net/pkt/113_PKT_S2C_DestroyClientMissile.hpp \
    net/pkt/114_PKT_S2C_ChainMissileSync.hpp \
    net/pkt/115_PKT_MissileReplication_ChainMissile.hpp \
    net/pkt/116_PKT_S2C_BotAI.hpp \
    net/pkt/117_PKT_S2C_AI_TargetSelection.hpp \
    net/pkt/118_PKT_S2C_AI_State.hpp \
    net/pkt/119_PKT_OnEvent.hpp \
    net/pkt/120_PKT_OnDisconnected.hpp \
    net/pkt/121_PKT_World_SendCamera_Server_Acknologment.hpp \
    net/pkt/122_PKT_World_SendGameNumber.hpp \
    net/pkt/123_PKT_NPC_Die_EventHistroy.hpp \
    net/pkt/124_PKT_C2S_Ping_Load_Info.hpp \
    net/pkt/125_PKT_S2C_Ping_Load_Info.hpp \
    net/pkt/126_PKT_C2S_Exit.hpp \
    net/pkt/127_PKT_S2C_Exit.hpp \
    net/pkt/128_PKT_C2S_Reconnect.hpp \
    net/pkt/129_PKT_S2C_Reconnect.hpp \
    net/pkt/130_PKT_S2C_Reconnect_Done.hpp \
    net/pkt/131_PKT_Waypoint_Acc.hpp \
    net/pkt/132_PKT_WaypointGroup.hpp \
    net/pkt/133_PKT_WaypointGroupWithSpeed.hpp \
    net/pkt/134_PKT_Connected.hpp \
    net/pkt/135_PKT_S2C_ToggleInputLockingFlag.hpp \
    net/pkt/136_PKT_S2C_ToggleFoW.hpp \
    net/pkt/137_PKT_S2C_ToggleFoWOn.hpp \
    net/pkt/138_PKT_S2C_SetCircularCameraRestriction.hpp \
    net/pkt/139_PKT_S2C_LockCamera.hpp \
    net/pkt/140_PKT_OnReplication.hpp \
    net/pkt/141_PKT_OnReplication_Acc.hpp \
    net/pkt/142_PKT_S2C_MoveCameraToPoint.hpp \
    net/pkt/143_PKT_S2C_PlayTutorialAudioEvent.hpp \
    net/pkt/144_PKT_ChangeSlotSpellType.hpp \
    net/pkt/145_PKT_PausePacket.hpp \
    net/pkt/146_PKT_ResumePacket.hpp \
    net/pkt/147_PKT_SetFrequency.hpp \
    net/pkt/148_PKT_SetFadeOut_Push.hpp \
    net/pkt/149_PKT_SetFadeOut_Pop.hpp \
    net/pkt/150_PKT_S2C_CreateUnitHighlight.hpp \
    net/pkt/151_PKT_S2C_RemoveUnitHighlight.hpp \
    net/pkt/152_PKT_S2C_OpenTutorialPopup.hpp \
    net/pkt/153_PKT_C2S_OnTutorialPopupClosed.hpp \
    net/pkt/154_PKT_S2C_OpenAFKWarningMessage.hpp \
    net/pkt/155_PKT_S2C_CloseShop.hpp \
    net/pkt/156_PKT_S2C_SetInputLockingFlag.hpp \
    net/pkt/157_PKT_C2S_OnShopOpened.hpp \
    net/pkt/158_PKT_S2C_ShowObjectiveText.hpp \
    net/pkt/159_PKT_S2C_HideObjectiveText.hpp \
    net/pkt/160_PKT_S2C_RefreshObjectiveText.hpp \
    net/pkt/161_PKT_S2C_ShowAuxiliaryText.hpp \
    net/pkt/162_PKT_S2C_HideAuxiliaryText.hpp \
    net/pkt/163_PKT_S2C_RefreshAuxiliaryText.hpp \
    net/pkt/164_PKT_S2C_HighlightHUDElement.hpp \
    net/pkt/165_PKT_S2C_HighlightShopElement.hpp \
    net/pkt/166_PKT_C2S_TeamSurrenderVote.hpp \
    net/pkt/167_PKT_S2C_TeamSurrenderVote.hpp \
    net/pkt/168_PKT_S2C_TeamSurrenderCountDown.hpp \
    net/pkt/169_PKT_S2C_TeamSurrenderStatus.hpp \
    net/pkt/170_PKT_S2C_LineMissileHitList.hpp \
    net/pkt/171_PKT_C2S_TutorialAudioEventFinished.hpp \
    net/pkt/172_PKT_S2C_HighlightTitanBarElement.hpp \
    net/pkt/173_PKT_S2C_ToggleUIHighlight.hpp \
    net/pkt/174_PKT_S2C_DisplayLocalizedTutorialChatText.hpp \
    net/pkt/175_PKT_S2C_ToolTipVars.hpp \
    net/pkt/176_PKT_S2C_MuteVolumeCategory.hpp \
    net/pkt/177_PKT_S2C_OnEventWorld.hpp \
    net/pkt/178_PKT_S2C_AnimatedBuildingSetCurrentSkin.hpp \
    net/pkt/179_PKT_S2C_SetGreyscaleEnabledWhenDead.hpp \
    net/pkt/180_PKT_S2C_DisableHUDForEndOfGame.hpp \
    net/pkt/181_PKT_ChangeSlotSpellName.hpp \
    net/pkt/182_PKT_S2C_SwitchNexusesToOnIdleParticles.hpp \
    net/pkt/183_PKT_S2C_FadeMinions.hpp \
    net/pkt/184_PKT_S2C_FadeOutMainSFX.hpp \
    net/pkt/185_PKT_S2C_HeroStats.hpp \
    net/pkt/186_PKT_S2C_SetAnimStates.hpp \
    net/pkt/187_PKT_ClientCheatDetectionSignal.hpp \
    net/pkt/188_PKT_S2C_AddDebugCircle.hpp \
    net/pkt/189_PKT_S2C_RemoveDebugCircle.hpp \
    net/pkt/190_PKT_S2C_ModifyDebugCircleRadius.hpp \
    net/pkt/191_PKT_S2C_ModifyDebugCircleColor.hpp \
    net/pkt/192_PKT_Undefined.hpp \
    net/pkt/193_PKT_S2C_Neutral_Camp_Empty.hpp \
    net/pkt/194_PKT_ResetForSlowLoader.hpp \
    net/pkt/255_PKT_Batched.hpp \
    net/netserver.hpp \
    net/base.hpp \
    testserver.hpp \
    net/onpacket.hpp \
    net/netbasepacket.hpp \
    net/netpacketstream.hpp \
    common/stringutils.h \
    common/connectioninfo.h \
    common/playerliteinfo.h \
    net/packetenums.hpp \
    dep/r3d/r3dfilemanager.h \
    dep/r3d/r3dconf.h \
    dep/r3d/r3dbuffer.h \
    dep/r3d/r3dnavgrid.h \
    content/chardata.hpp \
    content/itemdata.hpp \
    content/spelldata.hpp \
    obj/properties/characterintermediaterep.hpp \
    obj/properties/characterstate.hpp \
    obj/properties/replicationhelper.hpp \
    obj/properties/replicationmanager.hpp \
    obj/properties/experience.hpp \
    obj/properties/gold.hpp \
    obj/properties/health.hpp \
    obj/properties/mana.hpp \
    objectmanager.h \
    world.h

win32 {
    LIBS += -lws2_32 -lwinmm
}
