FiveIsland_LostCave_Room4_Frlg_MapScripts::
	.byte 0

FiveIsland_LostCave_Room4_EventScript_Laura::
	trainerbattle_single TRAINER_PSYCHIC_LAURA, FiveIsland_LostCave_Room4_Text_LauraIntro, FiveIsland_LostCave_Room4_Text_LauraDefeat
	msgbox FiveIsland_LostCave_Room4_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_LostCave_Room4_Text_LauraIntro::
	.string "この あな には\nふしぎな ちからが\lはたらいて いるの…!$"

FiveIsland_LostCave_Room4_Text_LauraDefeat::
	.string "ただしい あなに はいらないと\nさきへ すすめない わよ$"

FiveIsland_LostCave_Room4_Text_LauraPostBattle::
	.string "そういえば さっき\nおんなの ひとが\lこのさきへ はいって いったわ$"

