CeladonCity_DepartmentStore_3F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_3F_EventScript_CounterTutor::
	goto EventScript_CounterTutor
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid1::
	msgbox CeladonCity_DepartmentStore_3F_Text_OTStandsForOriginalTrainer, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid2::
	msgbox CeladonCity_DepartmentStore_3F_Text_BuddyTradingKangaskhanForHaunter, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid3::
	msgbox CeladonCity_DepartmentStore_3F_Text_HaunterEvolvedOnTrade, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_LittleGirl::
	msgbox CeladonCity_DepartmentStore_3F_Text_CanIdentifyTradeMonsByID, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_SuperNES::
	msgbox CeladonCity_DepartmentStore_3F_Text_ItsSuperNES, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV1::
	msgbox CeladonCity_DepartmentStore_3F_Text_AnRPG, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV2::
	msgbox CeladonCity_DepartmentStore_3F_Text_SportsGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV3::
	msgbox CeladonCity_DepartmentStore_3F_Text_PuzzleGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV4::
	msgbox CeladonCity_DepartmentStore_3F_Text_FightingGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_3F_Text_TVGameShop, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_Poster::
	msgbox CeladonCity_DepartmentStore_3F_Text_RedGreenBothArePokemon, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_Text_OTStandsForOriginalTrainer::
	.string "ひとの なまえと\nアイディが ポケモン ごとに\lきろく されてるよ$"

CeladonCity_DepartmentStore_3F_Text_BuddyTradingKangaskhanForHaunter::
	.string "やったー!\pとなりのこが ゴーストと ガルーラ\nこうかん してくれるって!$"

CeladonCity_DepartmentStore_3F_Text_HaunterEvolvedOnTrade::
	.string "はやく きて!\nゴースト ちゃーん!\pぼくは\nゴースト マニア なのね!\p… あー?\pてんそう されて きた ゴーストが\nべつの ポケモンに!?$"

CeladonCity_DepartmentStore_3F_Text_CanIdentifyTradeMonsByID::
	.string "ひとから もらった ポケモンは\nアイディが ちがうから わかるよ$"

CeladonCity_DepartmentStore_3F_Text_ItsSuperNES::
	.string "スーパー ファミコン だ!$"

CeladonCity_DepartmentStore_3F_Text_AnRPG::
	.string "ロールプレイング ゲームだ!\n… あそんでく ひまが ない$"

CeladonCity_DepartmentStore_3F_Text_SportsGame::
	.string "これは スポーツ ゲームだ!\n… おとうさんが すきそう!$"

CeladonCity_DepartmentStore_3F_Text_PuzzleGame::
	.string "パズル ゲームだ…!\n… はじめたら やめられない$"

CeladonCity_DepartmentStore_3F_Text_FightingGame::
	.string "たいせん アクションゲームだ!\n… ちょっと むずかしそう!$"

CeladonCity_DepartmentStore_3F_Text_TVGameShop::
	.string "3かい…テレビ ゲーム ショップ$"

CeladonCity_DepartmentStore_3F_Text_RedGreenBothArePokemon::
	.string "レッドと グリーン!\nどっちも ポケット モンスター!$"

Text_CounterTeach::
	.string "いやあー!\nポケモン やっと おわったよ!\lきみは まだ なの?\pそれじゃあ\nいい わざ おしえて あげよう!\pてんいんが おしえる わざだけに\nカウンター! どう おぼえる?$"

Text_CounterDeclined::
	.string "やめるの?\nじゃ きがむいたら きなよ$"

Text_CounterWhichMon::
	.string "どの ポケモンが\nおぼえるの かな?$"

Text_CounterTaught::
	.string "カウンター つかってる かい?$"
