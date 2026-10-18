ThreeIsland_House2_Frlg_MapScripts::
	.byte 0

ThreeIsland_House2_EventScript_Man::
	lock
	faceplayer
	famechecker FAMECHECKER_SABRINA, 1
	msgbox ThreeIsland_House2_Text_IAdmireSabrina
	release
	end

ThreeIsland_House2_EventScript_Rocker::
	msgbox ThreeIsland_House2_Text_CantMakeThisSpoonBend, MSGBOX_NPC
	end

ThreeIsland_House2_Text_CantMakeThisSpoonBend::
	.string "うううう… えーいっ!\p…ダメだ! この スプーン\nぜんぜん まがらん\pぼくには ちょうのうりょく\nないの かしらん$"

ThreeIsland_House2_Text_IAdmireSabrina::
	.string "ヤマブキシティには\nエスパー ポケモンを つかう\lおんなの ジムリーダーが いるだろ\pこいつ そのひとに\nあこがれて いるんだ\lクールな びじん だってさ$"

