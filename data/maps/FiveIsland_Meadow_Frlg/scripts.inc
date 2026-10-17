FiveIsland_Meadow_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
	.byte 0

FiveIsland_Meadow_OnLoad::
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	end

FiveIsland_Meadow_EventScript_WarehouseDoor::
	lockall
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
	releaseall
	end

FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
	waitmessage
	delay 60
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	special DrawWholeMapView
	playse SE_PIN
	waitse
	releaseall
	end

FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
	releaseall
	end

FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
	return

FiveIsland_Meadow_EventScript_Rocket1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_Meadow_EventScript_Rocket2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_Meadow_EventScript_Rocket3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end

@ Unused
FiveIsland_Meadow_Text_DoorNeedsTwoPasswords::
	.string "とびらを あけるには\nパスワードが 2つ いるようだ$"

FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded::
	.string "{PLAYER}は パスワードを\nにゅうりょく した\p『またまた タマタマ』\p…… …… ……\pとびらを あけるには もうひとつ\nパスワードが ひつようだ$"

FiveIsland_Meadow_Text_EnteredPasswordDoorOpened::
	.string "{PLAYER}は パスワードを\nにゅうりょく した\p『またまた タマタマ』\n『カブトは とぶか』\p…… …… ……\pそうこの とびらが ひらいた!$"

FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen::
	.string "そうこの とびらは\nすでに ひらいている$"

FiveIsland_Meadow_Text_Rocket1Intro::
	.string "ここは たちいり きんし\nはいって くんな!$"

FiveIsland_Meadow_Text_Rocket1Defeat::
	.string "ほんとかよ$"

FiveIsland_Meadow_Text_Rocket1PostBattle::
	.string "おまえ かんけい ないだろ\nかえれよ!$"

FiveIsland_Meadow_Text_Rocket2Intro::
	.string "この さきは\nおれたちの そうこ だぜ\lなんの ようだ?$"

FiveIsland_Meadow_Text_Rocket2Defeat::
	.string "こんな はずじゃ…$"

FiveIsland_Meadow_Text_Rocket2PostBattle::
	.string "その そうこには\nなにが はいって いるかって?\pくっくっく…\nしらない ほうが みのためだぜ$"

FiveIsland_Meadow_Text_Rocket3Intro::
	.string "この さきに\nいっても ムダよ!$"

FiveIsland_Meadow_Text_Rocket3Defeat::
	.string "あたま きたわ$"

FiveIsland_Meadow_Text_Rocket3PostBattle::
	.string "どうせ パスワードを\nしらなきゃ はいれないわよ$"

