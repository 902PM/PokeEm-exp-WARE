Route20_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	.byte 0

Route20_OnTransition::
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB3F
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB4F
	end

Route20_EventScript_ResetSeafoamBouldersForB3F::
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
	return

Route20_EventScript_ResetSeafoamBouldersForB4F::
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
	return

Route20_EventScript_SeafoamIslandsSign::
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
	end

Route20_Text_BarryIntro::
	.string "とおあさに なってる から\nおよいでる ひとも おおいよ!$"

Route20_Text_BarryDefeat::
	.string "うーみーッ!$"

Route20_Text_BarryPostBattle::
	.string "きみは ポケモンに のってて\nつかれ ないから いいなあ$"

Route20_Text_ShirleyIntro::
	.string "ふたごじまに\nリゾートに きてるの わたし$"

Route20_Text_ShirleyDefeat::
	.string "ちょっと やめてよ$"

Route20_Text_ShirleyPostBattle::
	.string "ふたごじまの ちかに\nしょうにゅうどうが あるんだって$"

Route20_Text_TiffanyIntro::
	.string "なみまに ぷかぷか うかぶ\n… あたしは おさかな$"

Route20_Text_TiffanyDefeat::
	.string "うー まんぼう!$"

Route20_Text_TiffanyPostBattle::
	.string "あなた いっしょに\n… ぷかぷか しない?$"

Route20_Text_IreneIntro::
	.string "きみも リゾートに きてるの?$"

Route20_Text_IreneDefeat::
	.string "てかげん なしね$"

Route20_Text_IrenePostBattle::
	.string "ふたごじまは むかしは\nふたつの しま だった らしいね$"

Route20_Text_DeanIntro::
	.string "みよーッ!\nきたえ あげた この からだ!$"

Route20_Text_DeanDefeat::
	.string "ふにゃふにゃだ$"

Route20_Text_DeanPostBattle::
	.string "じぶんの からだ より\nポケモンを きたえる べきだった$"

Route20_Text_DarrinIntro::
	.string "ポケモンに のってる なんて\nもしかして およげない とか?$"

Route20_Text_DarrinDefeat::
	.string "うー ぶくぶく$"

Route20_Text_DarrinPostBattle::
	.string "ポケモンに のって いくのも\nたのしそうだなあ$"

Route20_Text_RogerIntro::
	.string "とり ポケモンに つかまって\nここまで きたよ$"

Route20_Text_RogerDefeat::
	.string "あ! こまったな$"

Route20_Text_RogerPostBattle::
	.string "とりが へばっちゃって もどれないぞ\n… どうしよう$"

Route20_Text_NoraIntro::
	.string "かれに\nおっきな しんじゅ もらったわ!$"

Route20_Text_NoraDefeat::
	.string "やーん!\nしんじゅ いり なのに…$"

Route20_Text_NoraPostBattle::
	.string "パルシェン もっと そだてたら\nしんじゅも おっきく なるかしら$"

Route20_Text_MissyIntro::
	.string "グレン じま から\nおよいで きたけど… きついわ!$"

Route20_Text_MissyDefeat::
	.string "がっかり$"

Route20_Text_MissyPostBattle::
	.string "グレン じまの\nだれも すんでない おやしき\lいつからか ポケモンが すみついて\lポケモン やしきと よばれてる$"

Route20_Text_MelissaIntro::
	.string "にしに ある グレン じまは\nポケモン けんきゅうの しま!\lあそこで パパも はたらいてるわ$"

Route20_Text_MelissaDefeat::
	.string "まってよ もう!$"

Route20_Text_MelissaPostBattle::
	.string "グレンは かざんの ふんかで\nもりあがって できたって きいたわ$"

Route20_Text_SeafoamIslands::
	.string "ふたごじま$"

Route20_Text_MistyTrainsHere::
	.string "この あたりは\nつよい トレーナーや\lみずポケモンが おおいから\lハナダシティの カスミも\lしゅぎょうに きていると いうぜ$"

