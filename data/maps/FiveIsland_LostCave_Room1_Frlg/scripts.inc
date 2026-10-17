FiveIsland_LostCave_Room1_Frlg_MapScripts::
	.byte 0

FiveIsland_LostCave_Room1_EventScript_Lawson::
	trainerbattle_single TRAINER_RUIN_MANIAC_LAWSON, FiveIsland_LostCave_Room1_Text_LawsonIntro, FiveIsland_LostCave_Room1_Text_LawsonDefeat
	msgbox FiveIsland_LostCave_Room1_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_LostCave_Room1_Text_LawsonIntro::
	.string "ひいいい!\pいせき かと おもって はいったら\nゴーストだらけ じゃないか!$"

FiveIsland_LostCave_Room1_Text_LawsonDefeat::
	.string "ひいいい\nおたすけを!$"

FiveIsland_LostCave_Room1_Text_LawsonPostBattle::
	.string "ここから にげだそうにも\nおなじ ところに でてしまう\pいわの かずに なにか\nヒントが あるのかな…?$"

