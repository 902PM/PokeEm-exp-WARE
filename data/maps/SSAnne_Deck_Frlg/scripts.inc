SSAnne_Deck_Frlg_MapScripts::
	.byte 0

SSAnne_Deck_EventScript_Youngster::
	msgbox SSAnne_Deck_Text_ShipDepartingSoon, MSGBOX_NPC
	end

SSAnne_Deck_EventScript_BaldingMan::
	msgbox SSAnne_Deck_Text_FeelSeasick, MSGBOX_NPC
	end

SSAnne_Deck_EventScript_Sailor::
	msgbox SSAnne_Deck_Text_ScrubbingDecksHardWork, MSGBOX_NPC
	end

SSAnne_Deck_EventScript_Edmond::
	trainerbattle_single TRAINER_SAILOR_EDMOND, SSAnne_Deck_Text_EdmondIntro, SSAnne_Deck_Text_EdmondDefeat
	msgbox SSAnne_Deck_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_Deck_EventScript_Trevor::
	trainerbattle_single TRAINER_SAILOR_TREVOR, SSAnne_Deck_Text_TrevorIntro, SSAnne_Deck_Text_TrevorDefeat
	msgbox SSAnne_Deck_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_Deck_Text_ShipDepartingSoon::
	.string "パーティも そろそろ おわるし\nふねの しゅっぱつの じかん だな$"

SSAnne_Deck_Text_ScrubbingDecksHardWork::
	.string "まったく!\nデッキ そうじは らくじゃねえぜ$"

SSAnne_Deck_Text_FeelSeasick::
	.string "うう… きもち わるい!\p… ふなよい したので\nかぜに あたってるんです…$"

SSAnne_Deck_Text_EdmondIntro::
	.string "おうおう!\pふなのりの おれと しょうぶだ!$"

SSAnne_Deck_Text_EdmondDefeat::
	.string "つよいな\nびっくり したぜ$"

SSAnne_Deck_Text_EdmondPostBattle::
	.string "なあ! この せかいに\nポケモンは ぜんぶで どのくらい\lしゅるいが あると おもうか?$"

SSAnne_Deck_Text_TrevorIntro::
	.string "おい あんた!\nのってて ふなよい しないか?$"

SSAnne_Deck_Text_TrevorDefeat::
	.string "ゆだん したか$"

SSAnne_Deck_Text_TrevorPostBattle::
	.string "おれの おやじは ポケモンは\n151しゅるい いると いってたが\lおれは それ いじょう だと おもう$"

