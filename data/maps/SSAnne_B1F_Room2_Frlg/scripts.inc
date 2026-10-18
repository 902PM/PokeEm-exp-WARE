SSAnne_B1F_Room2_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room2_EventScript_Huey::
	trainerbattle_single TRAINER_SAILOR_HUEY, SSAnne_B1F_Room2_Text_HueyIntro, SSAnne_B1F_Room2_Text_HueyDefeat
	msgbox SSAnne_B1F_Room2_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room2_Text_HueyIntro::
	.string "ふなのり だって\nポケモン ぐらい もってるぜ!$"

SSAnne_B1F_Room2_Text_HueyDefeat::
	.string "なかなか\nやるじゃねーか$"

SSAnne_B1F_Room2_Text_HueyPostBattle::
	.string "おれたちの ポケモンは\nうみに でた ときに\lじぶんで とった もの ばかり だぜ$"

