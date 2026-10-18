CeruleanCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
	.byte 0

CeruleanCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
	call_if_unset FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_BlockExits
	end

CeruleanCity_EventScript_BlockExits::
	setobjectxyperm LOCALID_CERULEAN_POLICEMAN, 30, 12
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
	return

CeruleanCity_EventScript_RivalTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto CeruleanCity_EventScript_Rival
	end

CeruleanCity_EventScript_RivalTriggerMid::
	lockall
	setvar VAR_TEMP_1, 1
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 23, 0
	goto CeruleanCity_EventScript_Rival
	end

CeruleanCity_EventScript_RivalTriggerRight::
	lockall
	setvar VAR_TEMP_1, 2
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 24, 0
	goto CeruleanCity_EventScript_Rival
	end

CeruleanCity_EventScript_Rival::
	textcolor NPC_TEXT_COLOR_MALE
	setvar VAR_MAP_SCENE_ROUTE22, 2
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	addobject LOCALID_CERULEAN_RIVAL
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalEnter
	waitmovement 0
	msgbox CeruleanCity_Text_RivalIntro
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_RIVAL
	call_if_eq VAR_STARTER_MON, 2, CeruleanCity_EventScript_RivalSquirtle
	call_if_eq VAR_STARTER_MON, 1, CeruleanCity_EventScript_RivalBulbasaur
	call_if_eq VAR_STARTER_MON, 0, CeruleanCity_EventScript_RivalCharmander
	famechecker FAMECHECKER_BILL, 0
	msgbox CeruleanCity_Text_RivalPostBattle
	closemessage
	playbgm MUS_RG_RIVAL_EXIT, 0
	call_if_eq VAR_TEMP_1, 0, CeruleanCity_EventScript_RivalStartExit
	call_if_eq VAR_TEMP_1, 1, CeruleanCity_EventScript_RivalStartExit
	call_if_eq VAR_TEMP_1, 2, CeruleanCity_EventScript_RivalStartExitRight
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
	setflag FLAG_GOT_FAME_CHECKER
	giveitem ITEM_FAME_CHECKER
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
	closemessage
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalExit
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_CERULEAN_RIVAL
	releaseall
	end

CeruleanCity_EventScript_RivalSquirtle::
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
	return

CeruleanCity_EventScript_RivalBulbasaur::
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
	return

CeruleanCity_EventScript_RivalCharmander::
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
	return

CeruleanCity_EventScript_RivalStartExit::
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExit
	waitmovement 0
	return

CeruleanCity_EventScript_RivalStartExitRight::
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExitRight
	waitmovement 0
	return

CeruleanCity_Movement_PlayerWatchRivalExit::
	delay_16
	delay_8
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_down
	step_end

CeruleanCity_Movement_PlayerWatchRivalExitRight::
	delay_16
	delay_8
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

CeruleanCity_Movement_RivalEnter::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CeruleanCity_Movement_RivalStartExit::
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CeruleanCity_Movement_RivalStartExitRight::
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CeruleanCity_Movement_RivalExit::
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CeruleanCity_EventScript_Grunt::
	lock
	faceplayer
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
	message CeruleanCity_Text_GruntIntro
	waitmessage
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	waitbuttonpress
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
	goto CeruleanCity_EventScript_GruntDefeated
	end

CeruleanCity_EventScript_GruntDefeated::
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
	checkitemspace ITEM_TM28
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_EventScript_NoRoomForTM28
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
	msgbox CeruleanCity_Text_BetterGetMovingBye
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_CERULEAN_GRUNT
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_GOT_TM28_FROM_ROCKET
	release
	end

CeruleanCity_EventScript_NoRoomForTM28::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
	release
	end

CeruleanCity_EventScript_GruntTriggerTop::
	lockall
	setvar VAR_TEMP_1, 0
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto CeruleanCity_EventScript_GruntTrigger
	end

CeruleanCity_EventScript_GruntTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 1
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto CeruleanCity_EventScript_GruntTrigger
	end

CeruleanCity_EventScript_GruntTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox CeruleanCity_Text_GruntIntro
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_GRUNT
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
	goto CeruleanCity_EventScript_GruntDefeated
	end

CeruleanCity_EventScript_Policeman::
	lock
	faceplayer
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
	closemessage
	applymovement LOCALID_CERULEAN_POLICEMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeruleanCity_EventScript_LittleBoy::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoySlowbroMoved
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
	release
	end

CeruleanCity_EventScript_LittleBoySlowbroMoved::
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
	release
	end

CeruleanCity_EventScript_BaldingMan::
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
	end

CeruleanCity_EventScript_Youngster::
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
	end

CeruleanCity_EventScript_CeruleanCaveGuard::
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
	end

CeruleanCity_EventScript_Woman::
	lock
	faceplayer
	msgbox CeruleanCity_Text_WantBrightRedBicycle
	closemessage
	applymovement LOCALID_CERULEAN_WOMAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeruleanCity_EventScript_Lass::
	lock
	random 3
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroCommand1
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroCommand2
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroCommand3
	waitmessage
	delay 40
	playse SE_PIN
	applymovement LOCALID_CERULEAN_SLOWBRO, Common_Movement_QuestionMark
	waitmovement 0
	delay 30
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroFailed1
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroFailed2
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroFailed3
	release
	end

CeruleanCity_EventScript_SlowbroCommand1::
	message CeruleanCity_Text_SlowbroUseSonicboom
	return

CeruleanCity_EventScript_SlowbroCommand2::
	message CeruleanCity_Text_SlowbroPunch
	return

CeruleanCity_EventScript_SlowbroCommand3::
	message CeruleanCity_Text_SlowbroWithdraw
	return

CeruleanCity_EventScript_SlowbroFailed1::
	msgbox CeruleanCity_Text_SlowbroPayAttention
	return

CeruleanCity_EventScript_SlowbroFailed2::
	msgbox CeruleanCity_Text_NoYouBlewItAgain
	return

CeruleanCity_EventScript_SlowbroFailed3::
	msgbox CeruleanCity_Text_HardToControlMonsObedience
	return

CeruleanCity_EventScript_Slowbro::
	lock
	random 4
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroText1
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroText2
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroText3
	call_if_eq VAR_0x8008, 3, CeruleanCity_EventScript_SlowbroText4
	release
	end

CeruleanCity_EventScript_SlowbroText1::
	msgbox CeruleanCity_Text_SlowbroTookSnooze
	return

CeruleanCity_EventScript_SlowbroText2::
	msgbox CeruleanCity_Text_SlowbroLoafingAround
	return

CeruleanCity_EventScript_SlowbroText3::
	msgbox CeruleanCity_Text_SlowbroTurnedAway
	return

CeruleanCity_EventScript_SlowbroText4::
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
	return

CeruleanCity_EventScript_CitySign::
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_TrainerTips::
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
	end

CeruleanCity_EventScript_BikeShopSign::
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_MISTY, 0
	msgbox CeruleanCity_Text_GymSign
	releaseall
	end

CeruleanCity_Text_RivalIntro::
	.string "{RIVAL}『よう {PLAYER}!\pこんな とこ\nうろちょろ してたのか!\pおれ なんか つよいの すごいの\nいろいろ つかまえ ちゃって\lぜっこうちょう だぜ!\p… どれどれ {PLAYER}は\nなんか つかまえた?\lみせて みろよ!$"

CeruleanCity_Text_RivalDefeat::
	.string "なんだよー!\nムキに なっちゃって!\l… わかった わかった!$"

CeruleanCity_Text_RivalVictory::
	.string "なんたって!\nおれは てんさい だからよ!$"

CeruleanCity_Text_RivalPostBattle::
	.string "{RIVAL}『へへーんッ!\pおれ マサキの うちに いって\nめずらしい ポケモン たくさん\lみせて もらっちゃった もんね!\pおかげで ポケモン ずかんの\nページが ふえたぜ!\pなにしろ マサキは ゆうめいな\nポケモン マニア だからな!\pパソコン つうしんの\nポケモン あずかり システム!\lあれも マサキが つくったんだぜ\pおまえも つかってるんなら\nいちど おれいに いけば?\pおっと みちくさ くってる\nばあい じゃ ないぜ!\l… じゃな バイビー!$"

CeruleanCity_Text_OhRightLittlePresentAsFavor::
	.string "そうそう!\pおれに いつも さき こされて\nおまえも かわいそー だから\lこれを めぐんで やるぜ!$"

CeruleanCity_Text_ExplainFameCheckerSmellYa::
	.string "うわさずきの おまえには\nそれが ピッタリ だぜ!\lおれさまは たにん なんかに\lきょうみ ないからなー\pじゃな こんどこそ バイビー!$"

CeruleanCity_Text_GruntIntro::
	.string "あ こら!\nひとんちの にわ はいるなよ!\l…… …… え おれ?\p…… ただの とおり すがりだ\nぜーんぜん あやしくないよ!\l…… …… あやしい?{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"

CeruleanCity_Text_GruntDefeat::
	.string "だんいん『ひょえー まいった!\nもう しないよ!\lみのがして くれい!$"

CeruleanCity_Text_OkayIllReturnStolenTM::
	.string "…… わかった!\nぬすんだ もの かえすよ$"

CeruleanCity_Text_RecoveredTM28FromGrunt::
	.string "{PLAYER}は ロケットだんいんから\nわざマシン28を とりかえした!$"

CeruleanCity_Text_BetterGetMovingBye::
	.string "そ それじゃ……!\nおれは たいさん するから!\l…… …… ばいばーい!$"

CeruleanCity_Text_MakeRoomForThisCantRun::
	.string "にもつが いっぱいだ!\p…… これ わたさないと\nおれ にげられないよ!$"

CeruleanCity_Text_TrainerLifeIsToughIsntIt::
	.string "きみも ポケモン やってるか!\nあつめたり たたかったり\lいろいろ たいへん だな!$"

CeruleanCity_Text_YouCanCutDownSmallTrees::
	.string "ほそい きは いあいぎりで\nきれるって しってた?\pみせの まえの ほそいきも\nいあいぎりで きれるんだよ!\pでも どこか まわりみち すると\nいける らしい けど…$"

CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree::
	.string "あの ヤドランが いなければ\nきを きって\lむこうに いけるのに…\pでも どこか まわりみち すると\nいける らしい けど…$"

CeruleanCity_Text_PokemonEncyclopediaAmusing::
	.string "ほほう…!\nポケモンの ずかんを つくってる?\lそれは たのしそう だなあ!$"

CeruleanCity_Text_PeopleHereWereRobbed::
	.string "かわいそーな ことに\pこの いえは\nドロボーに はいられたんだ!\lはんにんは わかっとる!\lロケットだんの しわざだ!\pけいさつ としても\nロケットだんの あくじ には\lほとほと こまっとるのだ!$"

CeruleanCity_Text_SlowbroUseSonicboom::
	.string "さあ ヤドラン!\nソニック ブーム だすのよ!$"

CeruleanCity_Text_SlowbroPayAttention::
	.string "…やどらーん ってば\lわたしの いうこと きいて!$"

CeruleanCity_Text_SlowbroPunch::
	.string "ヤドラン! そこで パーンチ!$"

CeruleanCity_Text_NoYouBlewItAgain::
	.string "… がっくし また ダメ!$"

CeruleanCity_Text_SlowbroWithdraw::
	.string "ヤドラン! からに こもるの!$"

CeruleanCity_Text_HardToControlMonsObedience::
	.string "あん …ちがーう!\lポケモンって むずかしいわ!\pポケモンが\nいうこと きくか どうかは\lひとの うでまえ しだい なんだもの$"

CeruleanCity_Text_SlowbroTookSnooze::
	.string "ヤドランは ひるね してる…$"

CeruleanCity_Text_SlowbroLoafingAround::
	.string "ヤドランは なまけてる…$"

CeruleanCity_Text_SlowbroTurnedAway::
	.string "ヤドランは そっぽを むいた!$"

CeruleanCity_Text_SlowbroIgnoredOrders::
	.string "ヤドランは しらんぷり した…$"

CeruleanCity_Text_WantBrightRedBicycle::
	.string "わたしも じてんしゃ ほしい!\nまっかな じてんしゃ!\pそれで よごすの いや だから\nおうちに かざるわ!$"

CeruleanCity_Text_ThisIsCeruleanCave::
	.string "ここは… ハナダのどうくつ!\nこわい ほど つよい ポケモンが\lせいそく してるぞ!\pこの どうくつ には\nポケモン リーグ にんてい\lチャンピオンに なれるほど つよく\pまた いだいな しごとを\nなしとげた トレーナーしか\lはいれないのだ!$"

CeruleanCity_Text_CitySign::
	.string "ここは ハナダシティ\nハナダは みずいろ しんぴのいろ$"

CeruleanCity_Text_TrainerTipsHeldItems::
	.string "… おとくな けいじばん!\pポケモンには どうぐを\nもたせる ことが できます!\pどうぐを もたせておくと\nポケモンが それを\lつかう ことも あります!$"

CeruleanCity_Text_BikeShopSign::
	.string "くさむらも どうくつも スイスイ!\n… … ミラクル・サイクル$"

CeruleanCity_Text_GymSign::
	.string "ハナダ シティ ポケモン ジム\nリーダー カスミ\lおてんば にんぎょ$"

