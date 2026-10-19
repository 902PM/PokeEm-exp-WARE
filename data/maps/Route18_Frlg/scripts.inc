Route18_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route18_OnWarp
	.byte 0

Route18_OnTransition::
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route18_OnTransitionCyclingRoad
	end

Route18_OnTransitionCyclingRoad::
	setflag FLAG_SYS_ON_CYCLING_ROAD
	return

Route18_OnWarp::
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route18_OnWarpCyclingRoad
	.2byte 0

Route18_OnWarpCyclingRoad::
	special ForcePlayerOntoBike
	end

Route18_EventScript_RouteSign::
	msgbox Route18_Text_RouteSign, MSGBOX_SIGN
	end

Route18_EventScript_CyclingRoadSign::
	msgbox Route18_Text_CyclingRoadSign, MSGBOX_SIGN
	end

Route18_Text_WiltonIntro::
	.string "こういう くさむらを みつけては\nあたらしい ポケモン いないか\lさがしてるのさ!$"

Route18_Text_WiltonDefeat::
	.string "あう…!$"

Route18_Text_WiltonPostBattle::
	.string "じてんしゃ もって いたら\nぼくも サイクリング したい$"

Route18_Text_RamiroIntro::
	.string "クルック…ッ!\nどう? ぼくの ゆびぶえ!$"

Route18_Text_RamiroDefeat::
	.string "きじも なかずば\nうたれまいに って ことか$"

Route18_Text_RamiroPostBattle::
	.string "うみが ちかい から\nしゅうまつは うみどり ポケモン\lつかまえに くるよ$"

Route18_Text_JacobIntro::
	.string "この あたりは\nぼくらの なわばりだ!\lちかよらないで ほしいな!$"

Route18_Text_JacobDefeat::
	.string "… ふう!$"

Route18_Text_JacobPostBattle::
	.string "だれでも おきにいりの\nポケモンを とりに いく\lばしょが あるだろ!$"

Route18_Text_RouteSign::
	.string "ここは 18ばん どうろ\nタマムシ … セキチク$"

Route18_Text_CyclingRoadSign::
	.string "ここは サイクリング ロード\nあるいての つうこう きんし$"

