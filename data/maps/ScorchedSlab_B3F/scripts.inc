ScorchedSlab_B3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_B3F_OnTransition
	.byte 0

ScorchedSlab_B3F_OnTransition:
	call_if_set FLAG_CAUGHT_MOLTRES, ScorchedSlab_B3F_EventScript_VAR_STEP_1
	call_if_set FLAG_CAUGHT_ZAPDOS, ScorchedSlab_B3F_EventScript_VAR_STEP_2
	call_if_set FLAG_CAUGHT_ARTICUNO, ScorchedSlab_B3F_EventScript_VAR_STEP_3
	call_if_set FLAG_CAUGHT_HEATRAN, ScorchedSlab_B3F_EventScript_VAR_STEP_4
	call_if_set FLAG_CAUGHT_MOLTRES_GALAR, ScorchedSlab_B3F_EventScript_VAR_STEP_5
	call_if_set FLAG_CAUGHT_ZAPDOS_GALAR, ScorchedSlab_B3F_EventScript_VAR_STEP_6
	call_if_set FLAG_CAUGHT_ARTICUNO_GALAR, ScorchedSlab_B3F_EventScript_VAR_STEP_7
	call_if_unset FLAG_CAUGHT_ARTICUNO_GALAR, ScorchedSlab_B3F_EventScript_VAR_UNSET_1
	call_if_unset FLAG_CAUGHT_ZAPDOS_GALAR, ScorchedSlab_B3F_EventScript_VAR_UNSET_2
	call_if_unset FLAG_CAUGHT_MOLTRES_GALAR, ScorchedSlab_B3F_EventScript_VAR_UNSET_3
	call_if_unset FLAG_CAUGHT_HEATRAN, ScorchedSlab_B3F_EventScript_VAR_UNSET_4
	call_if_unset FLAG_CAUGHT_ARTICUNO, ScorchedSlab_B3F_EventScript_VAR_UNSET_5
	call_if_unset FLAG_CAUGHT_ZAPDOS, ScorchedSlab_B3F_EventScript_VAR_UNSET_6
	call_if_unset FLAG_CAUGHT_MOLTRES, ScorchedSlab_B3F_EventScript_VAR_UNSET_7
	end

ScorchedSlab_B3F_EventScript_VAR_STEP_1::
	setvar VAR_UNUSED_0x40F7, 1
	return

ScorchedSlab_B3F_EventScript_VAR_STEP_2::
	setvar VAR_UNUSED_0x40F7, 2
	return

ScorchedSlab_B3F_EventScript_VAR_STEP_3::
	setvar VAR_UNUSED_0x40F7, 3
	return

ScorchedSlab_B3F_EventScript_VAR_STEP_4::
	setvar VAR_UNUSED_0x40F7, 4
	return

ScorchedSlab_B3F_EventScript_VAR_STEP_5::
	setvar VAR_UNUSED_0x40F7, 5
	return

ScorchedSlab_B3F_EventScript_VAR_STEP_6::
	setvar VAR_UNUSED_0x40F7, 6
	return

ScorchedSlab_B3F_EventScript_VAR_STEP_7::
	setvar VAR_UNUSED_0x40F7, 7
	return

ScorchedSlab_B3F_EventScript_VAR_UNSET_1::
	goto_if_set FLAG_DEFEATED_ARTICUNO_GALAR, Common_EventScript_NopReturn
	setvar VAR_UNUSED_0x40F7, 6
	return

ScorchedSlab_B3F_EventScript_VAR_UNSET_2::
	goto_if_set FLAG_DEFEATED_ZAPDOS_GALAR, Common_EventScript_NopReturn
	setvar VAR_UNUSED_0x40F7, 5
	return

ScorchedSlab_B3F_EventScript_VAR_UNSET_3::
	goto_if_set FLAG_DEFEATED_MOLTRES_GALAR, Common_EventScript_NopReturn
	setvar VAR_UNUSED_0x40F7, 4
	return

ScorchedSlab_B3F_EventScript_VAR_UNSET_4::
	goto_if_set FLAG_DEFEATED_HEATRAN, Common_EventScript_NopReturn
	setvar VAR_UNUSED_0x40F7, 3
	return

ScorchedSlab_B3F_EventScript_VAR_UNSET_5::
	goto_if_set FLAG_DEFEATED_ARTICUNO, Common_EventScript_NopReturn
	setvar VAR_UNUSED_0x40F7, 2
	return

ScorchedSlab_B3F_EventScript_VAR_UNSET_6::
	goto_if_set FLAG_DEFEATED_ZAPDOS, Common_EventScript_NopReturn
	setvar VAR_UNUSED_0x40F7, 1
	return

ScorchedSlab_B3F_EventScript_VAR_UNSET_7::
	goto_if_set FLAG_DEFEATED_MOLTRES, Common_EventScript_NopReturn
	setvar VAR_UNUSED_0x40F7, 0
	return

ScorchedSlab_B3F_EventScript_Legendaries::
	lock
	faceplayer
	goto_if_ge VAR_UNUSED_0x40F7, 7, ScorchedSlab_B3F_EventScript_No_Legendaries
	msgbox ScorchedSlab_B3FText_LegendaryAppear, MSGBOX_DEFAULT
	waitse
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	goto_if_eq VAR_UNUSED_0x40F7, 0, ScorchedSlab_B3F_EventScript_Moltres
	goto_if_eq VAR_UNUSED_0x40F7, 1, ScorchedSlab_B3F_EventScript_Zapdos
	goto_if_eq VAR_UNUSED_0x40F7, 2, ScorchedSlab_B3F_EventScript_Articuno
	goto_if_eq VAR_UNUSED_0x40F7, 3, ScorchedSlab_B3F_EventScript_Heatran
	goto_if_eq VAR_UNUSED_0x40F7, 4, ScorchedSlab_B3F_EventScript_Moltres_Galar
	goto_if_eq VAR_UNUSED_0x40F7, 5, ScorchedSlab_B3F_EventScript_Zapdos_Galar
	goto_if_eq VAR_UNUSED_0x40F7, 6, ScorchedSlab_B3F_EventScript_Articuno_Galar
	end

ScorchedSlab_B3F_EventScript_Moltres::
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_MOLTRES, 50, ITEM_GOLD_BOTTLE_CAP
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_B3F_EventScript_Defeated1
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_B3F_EventScript_RanFrom1
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_B3F_EventScript_RanFrom1
	setflag FLAG_CAUGHT_MOLTRES
	setvar VAR_UNUSED_0x40F7, 7
	release
	end

ScorchedSlab_B3F_EventScript_Zapdos::
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_ZAPDOS, 50, ITEM_GOLD_BOTTLE_CAP
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_B3F_EventScript_Defeated2
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_B3F_EventScript_RanFrom2
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_B3F_EventScript_RanFrom2
	setflag FLAG_CAUGHT_ZAPDOS
	setvar VAR_UNUSED_0x40F7, 7
	release
	end

ScorchedSlab_B3F_EventScript_Articuno::
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_ARTICUNO, 50, ITEM_GOLD_BOTTLE_CAP
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_B3F_EventScript_Defeated3
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_B3F_EventScript_RanFrom3
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_B3F_EventScript_RanFrom3
	setflag FLAG_CAUGHT_ARTICUNO
	setvar VAR_UNUSED_0x40F7, 7
	release
	end

ScorchedSlab_B3F_EventScript_Heatran::
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_HEATRAN, 70, ITEM_GOLD_BOTTLE_CAP
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_B3F_EventScript_Defeated4
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_B3F_EventScript_RanFrom4
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_B3F_EventScript_RanFrom4
	setflag FLAG_CAUGHT_HEATRAN
	setvar VAR_UNUSED_0x40F7, 7
	release
	end

ScorchedSlab_B3F_EventScript_Moltres_Galar::
	playmoncry SPECIES_MOLTRES_GALAR, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_MOLTRES_GALAR, 70, ITEM_GOLD_BOTTLE_CAP
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_B3F_EventScript_Defeated5
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_B3F_EventScript_RanFrom5
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_B3F_EventScript_RanFrom5
	setflag FLAG_CAUGHT_MOLTRES_GALAR
	setvar VAR_UNUSED_0x40F7, 7
	release
	end

ScorchedSlab_B3F_EventScript_Zapdos_Galar::
	playmoncry SPECIES_ZAPDOS_GALAR, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_ZAPDOS_GALAR, 70, ITEM_GOLD_BOTTLE_CAP
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_B3F_EventScript_Defeated6
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_B3F_EventScript_RanFrom6
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_B3F_EventScript_RanFrom6
	setflag FLAG_CAUGHT_ZAPDOS_GALAR
	setvar VAR_UNUSED_0x40F7, 7
	release
	end

ScorchedSlab_B3F_EventScript_Articuno_Galar::
	playmoncry SPECIES_ARTICUNO_GALAR, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_ARTICUNO_GALAR, 70, ITEM_GOLD_BOTTLE_CAP
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ScorchedSlab_B3F_EventScript_Defeated7
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ScorchedSlab_B3F_EventScript_RanFrom7
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_B3F_EventScript_RanFrom7
	setflag FLAG_CAUGHT_ARTICUNO_GALAR
	setvar VAR_UNUSED_0x40F7, 7
	release
	end

ScorchedSlab_B3F_EventScript_No_Legendaries::
	msgbox ScorchedSlab_B3FText_No_Legendaries, MSGBOX_DEFAULT
	release
	end

ScorchedSlab_B3F_EventScript_Defeated1::
	setflag FLAG_DEFEATED_MOLTRES
	setvar VAR_0x8004, SPECIES_MOLTRES
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_RanFrom1::
	setvar VAR_0x8004, SPECIES_MOLTRES
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_Defeated2::
	setflag FLAG_DEFEATED_ZAPDOS
	setvar VAR_0x8004, SPECIES_ZAPDOS
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_RanFrom2::
	setvar VAR_0x8004, SPECIES_ZAPDOS
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_Defeated3::
	setflag FLAG_DEFEATED_ARTICUNO
	setvar VAR_0x8004, SPECIES_ARTICUNO
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_RanFrom3::
	setvar VAR_0x8004, SPECIES_ARTICUNO
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_Defeated4::
	setflag FLAG_DEFEATED_HEATRAN
	setvar VAR_0x8004, SPECIES_HEATRAN
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_RanFrom4::
	setvar VAR_0x8004, SPECIES_HEATRAN
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_Defeated5::
	setflag FLAG_DEFEATED_MOLTRES_GALAR
	setvar VAR_0x8004, SPECIES_MOLTRES_GALAR
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_RanFrom5::
	setvar VAR_0x8004, SPECIES_MOLTRES_GALAR
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_Defeated6::
	setflag FLAG_DEFEATED_ZAPDOS_GALAR
	setvar VAR_0x8004, SPECIES_ZAPDOS_GALAR
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_RanFrom6::
	setvar VAR_0x8004, SPECIES_ZAPDOS_GALAR
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_Defeated7::
	setflag FLAG_DEFEATED_ARTICUNO_GALAR
	setvar VAR_0x8004, SPECIES_ARTICUNO_GALAR
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_RanFrom7::
	setvar VAR_0x8004, SPECIES_ARTICUNO_GALAR
	goto ScorchedSlab_B3F_EventScript_LegendaryFlewAway
	end

ScorchedSlab_B3F_EventScript_LegendaryFlewAway::
	fadescreenswapbuffers FADE_TO_BLACK
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox ScorchedSlab_B3FText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end

ScorchedSlab_B3FText_LegendaryAppear::
	.string "あなの おくに……\nなにかが いる!!$"

ScorchedSlab_B3FText_LegendaryFlewAway::
	.string "{STR_VAR_1}は きえさって しまった……$"

ScorchedSlab_B3FText_No_Legendaries::
	.string "ここには もう\nなにも いないようだ$"
