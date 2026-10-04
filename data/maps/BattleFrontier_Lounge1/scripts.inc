BattleFrontier_Lounge1_MapScripts::
	.byte 0

@ NPC that rates pokemon based on their IVs
BattleFrontier_Lounge1_EventScript_Breeder::
	lock
	faceplayer
	call_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_BreederIntro
	call_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder::
	chooseboxmon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_ShowMonToBreeder
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_CancelMonSelect
	end

BattleFrontier_Lounge1_EventScript_BreederIntro::
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder::
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
	return

@ BufferVarsForIVRater buffers the following values
@ VAR_0x8005: Sum of the mons IVs
@ VAR_0x8006: Stat id of highest IV stat
@ VAR_0x8007: IV of the highest IV stat
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_ShowEggToBreeder
	special BufferVarsForIVRater
	goto_if_le VAR_0x8005, 90, BattleFrontier_Lounge1_EventScript_AverageTotalIVs       @ Average of 15
	goto_if_le VAR_0x8005, 120, BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs @ Average of 20
	goto_if_le VAR_0x8005, 150, BattleFrontier_Lounge1_EventScript_HighTotalIVs         @ Average of 25
	goto_if_ge VAR_0x8005, 151, BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs     @ Average of > 25
	end

BattleFrontier_Lounge1_EventScript_ShowEggToBreeder::
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

@ Comment on the highest IV stat
BattleFrontier_Lounge1_EventScript_HighestIVStat::
	goto_if_eq VAR_0x8006, STAT_HP, BattleFrontier_Lounge1_EventScript_HighestIVHP
	goto_if_eq VAR_0x8006, STAT_ATK, BattleFrontier_Lounge1_EventScript_HighestIVAtk
	goto_if_eq VAR_0x8006, STAT_DEF, BattleFrontier_Lounge1_EventScript_HighestIVDef
	goto_if_eq VAR_0x8006, STAT_SPEED, BattleFrontier_Lounge1_EventScript_HighestIVSpeed
	goto_if_eq VAR_0x8006, STAT_SPATK, BattleFrontier_Lounge1_EventScript_HighestIVSpAtk
	goto_if_eq VAR_0x8006, STAT_SPDEF, BattleFrontier_Lounge1_EventScript_HighestIVSpDef
	end

@ Comment on the highest IV value
BattleFrontier_Lounge1_EventScript_HighestIVValue::
	goto_if_le VAR_0x8007, 15, BattleFrontier_Lounge1_EventScript_HighestIVLow
	goto_if_le VAR_0x8007, 25, BattleFrontier_Lounge1_EventScript_HighestIVMid
	goto_if_le VAR_0x8007, 30, BattleFrontier_Lounge1_EventScript_HighestIVHigh
	goto_if_ge VAR_0x8007, 31, BattleFrontier_Lounge1_EventScript_HighestIVMax
	end

BattleFrontier_Lounge1_EventScript_EndBreederComments::
	release
	end

BattleFrontier_Lounge1_EventScript_AverageTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_AverageAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_HighTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_HighestIVHP::
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVAtk::
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVDef::
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpeed::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpAtk::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpDef::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVLow::
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVMid::
	msgbox BattleFrontier_Lounge1_Text_StatImpressive, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVHigh::
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVMax::
	msgbox BattleFrontier_Lounge1_Text_StatFlawless, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_CancelMonSelect::
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Boy1::
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding, MSGBOX_NPC
	end

BattleFrontier_Lounge1_EventScript_Boy2::
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt, MSGBOX_NPC
	end

@ togglegigantamaxfactorを弄り、isGigantamaxもった個体しかキョダイマックスできないようにした。
@ メルメタルは原作の仕様上、できない。
@ 原作通り、キョダイマックス→ダイマックスへのグレードダウンも可能。
BattleFrontier_Lounge1_EventScript_ToggleGigantaMax_Factor::
	lock
	faceplayer
	special ShowBattlePointsWindow
	msgbox BattleFrontier_Lounge1_Text_Welcome_GMAX, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge1_EventScript_No_Thank_You
	setvar VAR_0x8008, 3
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_lt VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge1_EventScript_Not_Enough_BP
BattleFrontier_Lounge1_EventScript_Return_1:
	msgbox BattleFrontier_Lounge1_Text_Who_Eat, MSGBOX_DEFAULT
	special ChoosePartyMon
	goto_if_ge VAR_0x8004, PARTY_SIZE, BattleFrontier_Lounge1_EventScript_No_Thank_You
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_IsEgg_GMAX
	bufferspeciesname STR_VAR_1, VAR_RESULT
	goto_if_eq VAR_0x8004, 0, BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_0
	goto_if_eq VAR_0x8004, 1, BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_1
	goto_if_eq VAR_0x8004, 2, BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_2
	goto_if_eq VAR_0x8004, 3, BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_3
	goto_if_eq VAR_0x8004, 4, BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_4
	togglegigantamaxfactor 5
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Cant_Eat
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	special UpdateBattlePointsWindow
	HasGigantamaxFactor 5
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Back_to_DynaMax
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_Lounge1_Text_ToggleGigantaMax
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_No_Thank_You::
	msgbox BattleFrontier_Lounge1_Text_End_GMAX, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_IsEgg_GMAX::
	msgbox BattleFrontier_Lounge1_Text_IsEgg_GMAX, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_Return_1
	release
	end

BattleFrontier_Lounge1_EventScript_Cant_Eat::
	msgbox BattleFrontier_Lounge1_Text_CantEat_Soup, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Not_Enough_BP::
	msgbox BattleFrontier_Lounge1_Text_NotEnoughBP_1, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_0::
	togglegigantamaxfactor 0
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Cant_Eat
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	special UpdateBattlePointsWindow
	HasGigantamaxFactor 0
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Back_to_DynaMax
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_Lounge1_Text_ToggleGigantaMax
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_1::
	togglegigantamaxfactor 1
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Cant_Eat
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	special UpdateBattlePointsWindow
	HasGigantamaxFactor 1
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Back_to_DynaMax
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_Lounge1_Text_ToggleGigantaMax
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_2::
	togglegigantamaxfactor 2
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Cant_Eat
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	special UpdateBattlePointsWindow
	HasGigantamaxFactor 2
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Back_to_DynaMax
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_Lounge1_Text_ToggleGigantaMax
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_3::
	togglegigantamaxfactor 3
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Cant_Eat
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	special UpdateBattlePointsWindow
	HasGigantamaxFactor 3
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Back_to_DynaMax
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_Lounge1_Text_ToggleGigantaMax
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_Toggle_GigantaMAX_4::
	togglegigantamaxfactor 4
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Cant_Eat
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	special UpdateBattlePointsWindow
	HasGigantamaxFactor 4
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_Back_to_DynaMax
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_Lounge1_Text_ToggleGigantaMax
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_Back_to_DynaMax::
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_Lounge1_Back_to_DynaMax
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_SeeYa, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

@ テラスタイプ変更
@ 現在はBPで処理している。テラピースが道具を圧迫するから。
@ 現在と同じタイプ選べる無駄行動なんとかしたい。
BattleFrontier_Lounge1_EventScript_Change_TerasType::
	lock
	faceplayer
	special ShowBattlePointsWindow
	msgbox BattleFrontier_Lounge1_Text_Welcome_Tera, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge1_EventScript_Exit
	setvar VAR_0x8008, 15
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_lt VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge1_EventScript_Notenugh_BP_2
BattleFrontier_Lounge1_EventScript_Return_2:
	msgbox BattleFrontier_Lounge1_Text_Choose_Ur_Mon, MSGBOX_DEFAULT
	special ChoosePartyMon
	goto_if_ge VAR_0x8004, PARTY_SIZE, BattleFrontier_Lounge1_EventScript_Exit
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_IsEgg_Tera
	bufferspeciesname STR_VAR_1, VAR_RESULT
	message BattleFrontier_Lounge1_EventScript_What_Type
	waitmessage
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_1, 1
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_2, 2
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_3, 3
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_4, 4
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_5, 5
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_6, 6
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_7, 7
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_8, 8
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_9, 9
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_11, 11
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_12, 12
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_13, 13
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_14, 14
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_15, 15
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_16, 16
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_17, 17
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_18, 18
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_19, 19
	dynmultipush BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_20, 20
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
	switch VAR_RESULT
	case MULTI_B_PRESSED, BattleFrontier_Lounge1_EventScript_Exit
	special SetTerasType
	special ShowBattlePointsWindow
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	special UpdateBattlePointsWindow
	playfanfare MUS_OBTAIN_ITEM
	message BattleFrontier_Lounge1_Text_Complete_Changes
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_ScriptEnd, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_Exit::
	msgbox BattleFrontier_Lounge1_Text_Exit, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge1_EventScript_IsEgg_Tera::
	msgbox BattleFrontier_Lounge1_Text_IsEgg_Tera, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_Return_2
	release
	end

BattleFrontier_Lounge1_EventScript_Notenugh_BP_2::
	msgbox BattleFrontier_Lounge1_Text_Notenugh_BP_2, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge1_Text_Exit, MSGBOX_DEFAULT
	release
	end

@ すごいとっくん。今現在はレベルを見てない。
@ きんのおうかんのみ対応で全個体値31にする。Championsで個体値実質廃止されたしよくね?
@ セリフはUSUMから参照。
BattleFrontier_Lounge1_EventScript_HyperTrain::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge1_Text_Uneed_HyperTrain, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge1_EventScript_BYE_1
	checkitem ITEM_GOLD_BOTTLE_CAP
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge1_EventScript_U_Dont_Have
BattleFrontier_Lounge1_EventScript_Return_3:
	msgbox BattleFrontier_Lounge1_Text_Slect_Mon, MSGBOX_DEFAULT
	special ChoosePartyMon
	goto_if_ge VAR_0x8004, PARTY_SIZE, BattleFrontier_Lounge1_EventScript_BYE_1
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_IsEgg_Train
	bufferspeciesname STR_VAR_1, VAR_RESULT
	goto_if_eq VAR_0x8004, 0, BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_0
	goto_if_eq VAR_0x8004, 1, BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_1
	goto_if_eq VAR_0x8004, 2, BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_2
	goto_if_eq VAR_0x8004, 3, BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_3
	goto_if_eq VAR_0x8004, 4, BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_4
	goto_if_eq VAR_0x8004, 5, BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_5
	release
	end

BattleFrontier_Lounge1_EventScript_BYE_1::
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_U_Dont_Have::
	msgbox BattleFrontier_Lounge1_Text_U_Dont_Have, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_IsEgg_Train::
	msgbox BattleFrontier_Lounge1_Text_IsEgg_Train, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_Return_3
	release
	end

BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_0::
	canhypertrain STAT_HP, 0
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_0
	canhypertrain STAT_ATK, 0
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_0
	canhypertrain STAT_DEF, 0
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_0
	canhypertrain STAT_SPATK, 0
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_0
	canhypertrain STAT_SPDEF, 0
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_0
	canhypertrain STAT_SPEED, 0
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_0
	msgbox BattleFrontier_Lounge1_Text_U_Dont_Need, MSGBOX_DEFAULT
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_1::
	canhypertrain STAT_HP, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_1
	canhypertrain STAT_ATK, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_1
	canhypertrain STAT_DEF, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_1
	canhypertrain STAT_SPATK, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_1
	canhypertrain STAT_SPDEF, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_1
	canhypertrain STAT_SPEED, 1
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_1
	msgbox BattleFrontier_Lounge1_Text_U_Dont_Need, MSGBOX_DEFAULT
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_2::
	canhypertrain STAT_HP, 2
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_2
	canhypertrain STAT_ATK, 2
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_2
	canhypertrain STAT_DEF, 2
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_2
	canhypertrain STAT_SPATK, 2
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_2
	canhypertrain STAT_SPDEF, 2
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_2
	canhypertrain STAT_SPEED, 2
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_2
	msgbox BattleFrontier_Lounge1_Text_U_Dont_Need, MSGBOX_DEFAULT
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_3::
	canhypertrain STAT_HP, 3
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_3
	canhypertrain STAT_ATK, 3
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_3
	canhypertrain STAT_DEF, 3
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_3
	canhypertrain STAT_SPATK, 3
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_3
	canhypertrain STAT_SPDEF, 3
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_3
	canhypertrain STAT_SPEED, 3
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_3
	msgbox BattleFrontier_Lounge1_Text_U_Dont_Need, MSGBOX_DEFAULT
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_4::
	canhypertrain STAT_HP, 4
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_4
	canhypertrain STAT_ATK, 4
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_4
	canhypertrain STAT_DEF, 4
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_4
	canhypertrain STAT_SPATK, 4
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_4
	canhypertrain STAT_SPDEF, 4
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_4
	canhypertrain STAT_SPEED, 4
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_4
	msgbox BattleFrontier_Lounge1_Text_U_Dont_Need, MSGBOX_DEFAULT
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Check_CanHyperTrain_5::
	canhypertrain STAT_HP, 5
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_5
	canhypertrain STAT_ATK, 5
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_5
	canhypertrain STAT_DEF, 5
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_5
	canhypertrain STAT_SPATK, 5
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_5
	canhypertrain STAT_SPDEF, 5
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_5
	canhypertrain STAT_SPEED, 5
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_Lounge1_EventScript_Do_HyperTrain_5
	msgbox BattleFrontier_Lounge1_Text_U_Dont_Need, MSGBOX_DEFAULT
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Do_HyperTrain_0::
	removeitem ITEM_GOLD_BOTTLE_CAP
	msgbox BattleFrontier_Lounge1_Text_Do_HyperTrain, MSGBOX_DEFAULT
	hypertrain STAT_HP, 0
	hypertrain STAT_ATK, 0
	hypertrain STAT_DEF, 0
	hypertrain STAT_SPATK, 0
	hypertrain STAT_SPDEF, 0
	hypertrain STAT_SPEED, 0
	playfanfare SE_USE_ITEM
	message BattleFrontier_Lounge1_Text_After_HyperTrain
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Do_HyperTrain_1::
	removeitem ITEM_GOLD_BOTTLE_CAP
	msgbox BattleFrontier_Lounge1_Text_Do_HyperTrain, MSGBOX_DEFAULT
	hypertrain STAT_HP, 1
	hypertrain STAT_ATK, 1
	hypertrain STAT_DEF, 1
	hypertrain STAT_SPATK, 1
	hypertrain STAT_SPDEF, 1
	hypertrain STAT_SPEED, 1
	playfanfare SE_USE_ITEM
	message BattleFrontier_Lounge1_Text_After_HyperTrain
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Do_HyperTrain_2::
	removeitem ITEM_GOLD_BOTTLE_CAP
	msgbox BattleFrontier_Lounge1_Text_Do_HyperTrain, MSGBOX_DEFAULT
	hypertrain STAT_HP, 2
	hypertrain STAT_ATK, 2
	hypertrain STAT_DEF, 2
	hypertrain STAT_SPATK, 2
	hypertrain STAT_SPDEF, 2
	hypertrain STAT_SPEED, 2
	playfanfare SE_USE_ITEM
	message BattleFrontier_Lounge1_Text_After_HyperTrain
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Do_HyperTrain_3::
	removeitem ITEM_GOLD_BOTTLE_CAP
	msgbox BattleFrontier_Lounge1_Text_Do_HyperTrain, MSGBOX_DEFAULT
	hypertrain STAT_HP, 3
	hypertrain STAT_ATK, 3
	hypertrain STAT_DEF, 3
	hypertrain STAT_SPATK, 3
	hypertrain STAT_SPDEF, 3
	hypertrain STAT_SPEED, 3
	playfanfare SE_USE_ITEM
	message BattleFrontier_Lounge1_Text_After_HyperTrain
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Do_HyperTrain_4::
	removeitem ITEM_GOLD_BOTTLE_CAP
	msgbox BattleFrontier_Lounge1_Text_Do_HyperTrain, MSGBOX_DEFAULT
	hypertrain STAT_HP, 4
	hypertrain STAT_ATK, 4
	hypertrain STAT_DEF, 4
	hypertrain STAT_SPATK, 4
	hypertrain STAT_SPDEF, 4
	hypertrain STAT_SPEED, 4
	playfanfare SE_USE_ITEM
	message BattleFrontier_Lounge1_Text_After_HyperTrain
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Do_HyperTrain_5::
	removeitem ITEM_GOLD_BOTTLE_CAP
	msgbox BattleFrontier_Lounge1_Text_Do_HyperTrain, MSGBOX_DEFAULT
	hypertrain STAT_HP, 5
	hypertrain STAT_ATK, 5
	hypertrain STAT_DEF, 5
	hypertrain STAT_SPATK, 5
	hypertrain STAT_SPDEF, 5
	hypertrain STAT_SPEED, 5
	playfanfare SE_USE_ITEM
	message BattleFrontier_Lounge1_Text_After_HyperTrain
	waitfanfare
	waitbuttonpress
	msgbox BattleFrontier_Lounge1_Text_BYE_1, MSGBOX_DEFAULT
	release
	end

@ Unused
BattleFrontier_Lounge1_Text_PokemonBreederIntro:
	.string "わしは ポケモン そだてて 70ねん!\nでんせつの ポケモントップブリーダーと\lあがめられる おとこ じゃ!\pわしくらいに なると ポケモンの\nのうりょくが ひとめで わかるんじゃぞっ!\pおまえさんも トレーナーなら\nじぶんの ポケモンの のうりょくが\lきになる じゃろ?\pほれ! わしに ポケモンを みせて みいっ!$"

BattleFrontier_Lounge1_Text_AverageAbility:
	.string "…… んー\pこいつは ぜんたいてきに いうと\nまずまずの のうりょくと\lいう ところかの……$"

BattleFrontier_Lounge1_Text_BetterThanAverageAbility:
	.string "…… んー\pこいつは ぜんたいてきに いうと\nへいきん いじょうの\lのうりょくを もっとるな……$"

BattleFrontier_Lounge1_Text_ImpressiveAbility:
	.string "…… んー\pこいつは ぜんたいてきに いうと\nそうとう ゆうしゅうな\lのうりょくを もっとるぞ!$"

BattleFrontier_Lounge1_Text_OutstandingAbility:
	.string "…… んー\pこいつは ぜんたいてきに いうと\nすばらしい のうりょく じゃな!$"

BattleFrontier_Lounge1_Text_BestAspectHP:
	.string "ちなみに いちばん いいかんじ なのは\nHP かの……$"

BattleFrontier_Lounge1_Text_BestAspectAtk:
	.string "ちなみに いちばん いいかんじ なのは\nこうげき かの……$"

BattleFrontier_Lounge1_Text_BestAspectDef:
	.string "ちなみに いちばん いいかんじ なのは\nぼうぎょ かの……$"

BattleFrontier_Lounge1_Text_BestAspectSpAtk:
	.string "ちなみに いちばん いいかんじ なのは\nとくこう かの……$"

BattleFrontier_Lounge1_Text_BestAspectSpDef:
	.string "ちなみに いちばん いいかんじ なのは\nとくぼう かの……$"

BattleFrontier_Lounge1_Text_BestAspectSpeed:
	.string "ちなみに いちばん いいかんじ なのは\nすばやさ かの……$"

BattleFrontier_Lounge1_Text_StatRelativelyGood:
	.string "まあまあの のうりょくを もっとるぞ……\n……ふむ…… そんな かんじ かのう!$"

BattleFrontier_Lounge1_Text_StatImpressive:
	.string "かなりの ちからを もっとるな!\n……ふむ…… そんな かんじ かのう!$"

BattleFrontier_Lounge1_Text_StatOutstanding:
	.string "すばらしい ちからを もっとる!\n……ふむ…… そんな かんじ かのう!$"

BattleFrontier_Lounge1_Text_StatFlawless:
	.string "ばっちりっ! ぱーふぇくと じゃ!\n……ふむ…… そんな かんじ かのう!$"

BattleFrontier_Lounge1_Text_NoTimeForMyAdvice:
	.string "なんじゃい!\nわしの あどばいすは いらんと いうのか!\pじんせいの せんぱいの おしえは\nだまって きく もんじゃぞ!!$"

@ Unused(ガチの)
BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending:
	.string "なんじゃー?\pわしも いろいろ いそがしい からのう!\nまた こんどに せい!$"

BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon:
	.string "おお! わかいの!\nポケモンの のうりょくが きになるんか?\pほれほれ!\nわしに ポケモンを みせて みい!$"

@ Unused ここまで
BattleFrontier_Lounge1_Text_EvenICantTell:
	.string "さすがの わしも まだ うまれても いない\nポケモンの ことは わからんぞっ!\pポケモンを みせんか! ポケモンを!$"

BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding:
	.string "ぼくの ポケモン すばらしいって!\nだいじに そだてて きてよかった!$"

BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt:
	.string "ぼくの ポケモン すばらしいって!\nべつに ふつうに そだてたん だけどな……$"

@ ここから追加文章。キョダイマックス編
BattleFrontier_Lounge1_Text_Welcome_GMAX::
    .string "ガラルの ひでんの スープ!\nダイスープは いかがですか?\l1つ 3BPです!$"

BattleFrontier_Lounge1_Text_End_GMAX::
    .string "そうですか……$"

BattleFrontier_Lounge1_Text_Who_Eat::
    .string "だれに あげますか?$"

BattleFrontier_Lounge1_Text_IsEgg_GMAX::
    .string "おきゃくさん!\nタマゴは スープを たべられませんよ!$"

BattleFrontier_Lounge1_Text_CantEat_Soup::
    .string "{STR_VAR_1}は たべない みたいです……$"

BattleFrontier_Lounge1_Text_NotEnoughBP_1::
    .string "おきゃくさん!! BPが たりませんよ!$"

BattleFrontier_Lounge1_Text_ToggleGigantaMax::
    .string "{STR_VAR_1}は キョダイマックス\nできるように なった!$"

BattleFrontier_Lounge1_Back_to_DynaMax::
    .string "{STR_VAR_1}は ダイマックス\nできるように なった!$"

BattleFrontier_Lounge1_Text_SeeYa::
    .string "また どうぞ!$"

@ テラスタイプ編
BattleFrontier_Lounge1_Text_Welcome_Tera::
    .string "いらっしゃい! いまなら 15BPで\nテラスタイプが へんこう できます!\pへんこう しますか?$"

BattleFrontier_Lounge1_Text_Exit::
    .string "また どうぞ!$"

BattleFrontier_Lounge1_Text_Notenugh_BP_2::
    .string "おきゃくさん!!\nBPが たりませんよ!!!$"

BattleFrontier_Lounge1_Text_Choose_Ur_Mon::
    .string "どの ポケモンに しますか?$"

BattleFrontier_Lounge1_Text_IsEgg_Tera::
    .string "タマゴは ちょっと ムリですね……$"

BattleFrontier_Lounge1_EventScript_What_Type::
    .string "どのタイプに しますか?$"

BattleFrontier_Lounge1_Text_Complete_Changes::
    .string "{STR_VAR_1}の テラスタイプが へんかした!$"

BattleFrontier_Lounge1_Text_ScriptEnd::
    .string "またの ごりよう おまちしています!!$"

BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_1:
	.string "ノーマル$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_2:
	.string "かくとう$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_3:
	.string "ひこう$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_4:
	.string "どく$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_5:
	.string "じめん$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_6:
	.string "いわ$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_7:
	.string "むし$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_8:
	.string "ゴースト$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_9:
	.string "はがね$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_11:
	.string "ほのお$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_12:
	.string "みず$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_13:
	.string "くさ$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_14:
	.string "でんき$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_15:
	.string "エスパー$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_16:
	.string "こおり$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_17:
	.string "ドラゴン$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_18:
	.string "あく$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_19:
	.string "フェアリー$"
BattleFrontier_Lounge1_EventScript_ChangeType_Text_TYPE_20:
	.string "ステラ$"

@ すごいとっくん編
BattleFrontier_Lounge1_Text_Uneed_HyperTrain::
    .string "ポケモンの のうりょくを たかめる\nすごいとっくんを するかい?$"

BattleFrontier_Lounge1_Text_BYE_1::
    .string "それじゃあ また おいで\nすごいオヤジは すごく まっているよ!$"

BattleFrontier_Lounge1_Text_U_Dont_Have::
    .string "おやおや……\pきんのおうかんを もっていない みたいだね\nうちは きんのおうかん でしか できないからね!\pそれじゃあ また おいで\nすごいオヤジは すごく まっているよ!$"

BattleFrontier_Lounge1_Text_Slect_Mon::
    .string "どの ポケモンに\nすごいとっくんを させるんだい?$"

BattleFrontier_Lounge1_Text_IsEgg_Train::
    .string "タマゴ!?\nすごいとっくんには はやすぎるね!$"

BattleFrontier_Lounge1_Text_U_Dont_Need::
    .string "きみの {STR_VAR_1}は\nとっくんの ひつようが ないぐらい\lすごく つよくなっているよ!$"

BattleFrontier_Lounge1_Text_Do_HyperTrain::
    .string "では {STR_VAR_1}に\nすごいとっくんを するよ!$"

BattleFrontier_Lounge1_Text_After_HyperTrain::
    .string "{STR_VAR_1}は\nすごいとっくんで つよくなった!$"
