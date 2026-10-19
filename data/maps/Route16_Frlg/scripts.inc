Route16_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route16_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route16_OnWarp
	.byte 0

Route16_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route16_EventScript_RemoveSnorlax
	end

Route16_EventScript_RemoveSnorlax::
	removeobject VAR_LAST_TALKED
	return

Route16_OnTransition::
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route16_OnTransitionCyclingRoad
	end

Route16_OnTransitionCyclingRoad::
	setflag FLAG_SYS_ON_CYCLING_ROAD
	return

Route16_OnWarp::
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route16_OnWarpCyclingRoad
	.2byte 0

Route16_OnWarpCyclingRoad::
	special ForcePlayerOntoBike
	end

Route16_EventScript_Snorlax::
	lock
	faceplayer
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route16_EventScript_SnorlaxNoPokeFlute
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route16_EventScript_DontUsePokeFlute
	call EventScript_AwakenSnorlax
	setwildbattle SPECIES_SNORLAX, 30
	waitse
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_HIDE_ROUTE_16_SNORLAX
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route16_EventScript_FoughtSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route16_EventScript_FoughtSnorlax
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route16_EventScript_FoughtSnorlax
	release
	end

Route16_EventScript_DontUsePokeFlute::
	release
	end

Route16_EventScript_FoughtSnorlax::
	msgbox Text_SnorlaxReturnedToMountains
	release
	end

Route16_EventScript_SnorlaxNoPokeFlute::
	msgbox Route16_Text_MonSprawledOutInSlumber
	release
	end

Route16_EventScript_CyclingRoadSign::
	msgbox Route16_Text_CyclingRoadSign, MSGBOX_SIGN
	end

Route16_EventScript_RouteSign::
	msgbox Route16_Text_RouteSign, MSGBOX_SIGN
	end

Route16_Text_LaoIntro::
	.string "っだと こらあ!$"

Route16_Text_LaoDefeat::
	.string "ってんじゃねえぞ!$"

Route16_Text_LaoPostBattle::
	.string "っせーな!\nおれたちゃ はしる より\lここで だらだら してる ほうが\lたのしいんだよ!$"

Route16_Text_KojiIntro::
	.string "おう おうッ!\nその じてんしゃ おれに くれ!$"

Route16_Text_KojiDefeat::
	.string "ノック アウト!$"

Route16_Text_KojiPostBattle::
	.string "もう いい!\nじてんしゃは いらねえ!$"

Route16_Text_LukeIntro::
	.string "かわいがって やろう!$"

Route16_Text_LukeDefeat::
	.string "この やろう!$"

Route16_Text_LukePostBattle::
	.string "よくも やって くれたな!\nおれは まけるのが\lだい きらい なんだ!$"

Route16_Text_HideoIntro::
	.string "こら まて!\nぶつかって おいて にげるな!$"

Route16_Text_HideoDefeat::
	.string "ボンバー!$"

Route16_Text_HideoPostBattle::
	.string "おれたち いつも ここに いるぜ!\nこわかったら クチバ から\lうみぞい まわって\lセキチクへ いくんだな!$"

Route16_Text_CamronIntro::
	.string "おれは いま きげんが わるい!\nウサ ばらしが してえ!$"

Route16_Text_CamronDefeat::
	.string "なまいきな やつだぜ!$"

Route16_Text_CamronPostBattle::
	.string "どうせ ポケモン やるなら\nきょうぼうな やつが ほしいぜ!\lそれで あいてを\lボロボロに してやる!$"

Route16_Text_RubenIntro::
	.string "ひょひょーッ!\nすこし あそんでって やるぜ!$"

Route16_Text_RubenDefeat::
	.string "おれを おこらすなよ!$"

Route16_Text_RubenPostBattle::
	.string "おう おうッ!\nポケモンで おどかしたり\lかみつかせたり いたずら したり\lするのが すきだぜ!$"

Route16_Text_MonSprawledOutInSlumber::
	.string "ポケモンが とても\nきもちよさそうに ねています$"

Route16_Text_CyclingRoadSign::
	.string "さかみちを たのしもう!\nサイクリング ロード!$"

Route16_Text_RouteSign::
	.string "ここは 16ばん どうろ\nタマムシ … セキチク$"

Route16_Text_JedIntro::
	.string "ジン『とどまりを しらない\nぼくらの ラブラブっぷり…!$"

Route16_Text_JedDefeat::
	.string "ジン『あちゃー\nまけた ところを みられちゃった$"

Route16_Text_JedPostBattle::
	.string "ジン『こら カホ\nぼく ばっか みてたら ダメだぞぉ$"

Route16_Text_JedNotEnoughMons::
	.string "ジン『ポケモン 1ぴき なんて…\nラブラブ じゃない じゃないか!$"

Route16_Text_LeaIntro::
	.string "カホ『すき すぎて\nこわい ことって あるの$"

Route16_Text_LeaDefeat::
	.string "カホ『やーん\nまけてる ジンも かっこいいのぉ$"

Route16_Text_LeaPostBattle::
	.string "カホ『てへっ ごめんなさぁい\nジンが かっこいいんだもん$"

Route16_Text_LeaNotEnoughMons::
	.string "カホ『ポケモン 2ひき いないのね\nあなたも ポケモンも ひとりじゃ\lさみしいわよぉ$"

