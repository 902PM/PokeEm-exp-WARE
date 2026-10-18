SSAnne_B1F_Room1_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room1_EventScript_Barny::
	trainerbattle_single TRAINER_FISHERMAN_BARNY, SSAnne_B1F_Room1_Text_BarnyIntro, SSAnne_B1F_Room1_Text_BarnyDefeat
	msgbox SSAnne_B1F_Room1_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room1_EventScript_Phillip::
	trainerbattle_single TRAINER_SAILOR_PHILLIP, SSAnne_B1F_Room1_Text_PhillipIntro, SSAnne_B1F_Room1_Text_PhillipDefeat
	msgbox SSAnne_B1F_Room1_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room1_Text_PhillipIntro::
	.string "うっしゃー!\nまけたら うみ に おとすぞー!$"

SSAnne_B1F_Room1_Text_PhillipDefeat::
	.string "くー やられた!$"

SSAnne_B1F_Room1_Text_PhillipPostBattle::
	.string "うみに でてると\nたまーに クラゲ ポケモンが\lながれて くるぜ$"

SSAnne_B1F_Room1_Text_BarnyIntro::
	.string "うみのもの とも やまのもの とも\nわからない しんいり さん!\pわたしが もってるのは\nうみのもの ばかり です!$"

SSAnne_B1F_Room1_Text_BarnyDefeat::
	.string "ちっ!\nつり のがしたよ$"

SSAnne_B1F_Room1_Text_BarnyPostBattle::
	.string "あなた まかしたら つりびとの\nつきびとに しようと おもってた$"

