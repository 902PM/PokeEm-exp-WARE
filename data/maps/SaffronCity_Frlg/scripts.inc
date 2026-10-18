SaffronCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0

SaffronCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
	call_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_MoveDoorGuardGrunt
	end

SaffronCity_EventScript_MoveDoorGuardGrunt::
	setobjectxyperm LOCALID_SAFFRON_DOOR_GUARD_GRUNT, 33, 31
	return

SaffronCity_EventScript_RocketGrunt1::
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt2::
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt3::
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt4::
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt5::
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt6::
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt7::
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
	end

SaffronCity_EventScript_DoorGuardGrunt::
	lock
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardAsleep
	applymovement LOCALID_SAFFRON_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SaffronCity_Text_ImASecurityGuard
	release
	end

SaffronCity_EventScript_DoorGuardAsleep::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox SaffronCity_Text_HesTakingASnooze
	release
	end

SaffronCity_EventScript_WorkerM::
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
	end

SaffronCity_EventScript_Youngster::
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
	end

SaffronCity_EventScript_Lass::
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
	end

SaffronCity_EventScript_Boy::
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
	end

SaffronCity_EventScript_Pidgeot::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	msgbox SaffronCity_Text_Pidgeot
	waitmoncry
	release
	end

SaffronCity_EventScript_Man::
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
	end

SaffronCity_EventScript_CitySign::
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
	end

SaffronCity_EventScript_DojoSign::
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
	end

SaffronCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_SABRINA, 0
	msgbox SaffronCity_Text_GymSign
	releaseall
	end

SaffronCity_EventScript_TrainerTips1::
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
	end

SaffronCity_EventScript_TrainerTips2::
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
	end

SaffronCity_EventScript_SilphCoSign::
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_MrPsychicsHouseSign::
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
	end

SaffronCity_EventScript_SilphProductSign::
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
	end

SaffronCity_EventScript_TrainerFanClubSign::
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end

SaffronCity_Text_WhatDoYouWantGetLost::
	.string "なんだァ!\nてめえ! あっち いけ!$"

SaffronCity_Text_BossTakeTownForTeamRocket::
	.string "ボスは この まちを\nロケットだんの ものに するってよォ$"

SaffronCity_Text_DontGetDefiantOrIllHurtYou::
	.string "こらァ おれたちに さからうと\nいたい めに あうぞ!$"

SaffronCity_Text_SaffronBelongsToTeamRocket::
	.string "ヤマブキ シティ ごと\nロケットだんが のっとったぜ!$"

SaffronCity_Text_CriminalLifeMakesMeFeelAlive::
	.string "わるい こと やりまくると\nスカッと するぜ!$"

SaffronCity_Text_WatchWhereYoureWalking::
	.string "いてッ! この やろ!\nどこ みて あるいてんだよ!$"

SaffronCity_Text_WeCanExploitMonsAroundWorld::
	.string "シルフ カンパニー のっとったら\nせかい じゅうに ポケモン うって\lガバガバ おお もうけ だぜ!$"

SaffronCity_Text_YouBeatTeamRocket::
	.string "ロケットだん やっつけたの\nたった ひとり だって… すごいな$"

SaffronCity_Text_SafeToGoOutAgain::
	.string "ばんざーい!\nロケットだんが いなくなった!\lビビらないで そと あるけるんだ!$"

SaffronCity_Text_PeopleComingBackToSaffron::
	.string "ヤマブキ シティも いちじは\nひとが にげて へっちゃった けど\lにぎやかな まちに もどるわ!$"

SaffronCity_Text_FlewHereOnPidgeot::
	.string "ロケットだんが シルフ おそって\nだいじけんって きいて!\lピジョットで とんで きたッス\pかいけつ した…?\nすんません!\lねっからの ヤジウマ で!$"

SaffronCity_Text_Pidgeot::
	.string "ピジョット『ビビーッ!$"

SaffronCity_Text_SawRocketBossEscaping::
	.string "おれ みたぜ!\pシルフの ビルから ロケットだんの\nボスが にげて いくの!$"

SaffronCity_Text_ImASecurityGuard::
	.string "わたしは けいびいんだが\nあやしい こどもは\pとおせんぼ することに してるのだ$"

SaffronCity_Text_HesTakingASnooze::
	.string "… … …\n…こっくり こっくり\pしめしめ! いねむり しているぞ$"

SaffronCity_Text_CitySign::
	.string "ここは ヤマブキ シティ\nヤマブキ きんいろ かがやきのいろ$"

SaffronCity_Text_FightingDojo::
	.string "かくとう どうじょう!$"

SaffronCity_Text_GymSign::
	.string "ヤマブキ シティ ポケモン ジム\nリーダー ナツメ\lエスパー しょうじょ!$"

SaffronCity_Text_FullHealCuresStatus::
	.string "… おとくな けいじばん!\pなんでも なおしは\nねむり どく やけど こおり…\lなんでも なおします!\pすこし たかい けど\nねむけざまし どくけし などを\lバラバラに かうより らくちん!$"

SaffronCity_Text_GreatBallImprovedCatchRate::
	.string "… おとくな けいじばん!\pしんせいひん スーパーボールは\nモンスターボール より かくじつに\lポケモンを つかまえます!\pなかなか つかまえ られない\nポケモンには こちらを ためそう!$"

SaffronCity_Text_SilphCoSign::
	.string "シルフ カンパニー ほんしゃ ビル$"

SaffronCity_Text_MrPsychicsHouse::
	.string "エスパー おやじの いえ$"

SaffronCity_Text_SilphsLatestProduct::
	.string "シルフ うわさの しんせいひん!\n… はつばいび みてい$"

SaffronCity_Text_TrainerFanClubSign::
	.string "ポケモン トレーナー ファンクラブ\pかんばんに いろんな トレーナーの\nなまえが らくがき されている……$"

SaffronCity_Text_HowCanClubNotRecognizeLance::
	.string "はなしの あうひとが ぜーんぜん\nいないわっ この ファンクラブ!\pせいぎかんが つよくて\nねっけつで かっこよくて\lいちばん すごい ひと…!\pその ワタルさまの よさが\nわからない なんて! プンプン!$"

