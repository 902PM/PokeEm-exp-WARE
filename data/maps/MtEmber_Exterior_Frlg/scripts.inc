MtEmber_Exterior_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
	.byte 0

MtEmber_Exterior_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
	call_if_eq VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2, MtEmber_Exterior_EventScript_RocketsFaceDown
	end

MtEmber_Exterior_EventScript_RocketsFaceDown::
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
	return

MtEmber_Exterior_OnLoad::
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_OpenCave
	end

MtEmber_Exterior_EventScript_OpenCave::
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
	return

MtEmber_Exterior_EventScript_Grunt1::
	lock
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt1
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
	release
	end

MtEmber_Exterior_EventScript_Grunt1Defeated::
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
	release
	end

MtEmber_Exterior_EventScript_BattleGrunt1::
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	msgbox MtEmber_Exterior_Text_Grunt1Intro
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
	release
	end

MtEmber_Exterior_EventScript_DefeatedBothGrunts::
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_MT_EMBER_GRUNT1
	removeobject LOCALID_MT_EMBER_GRUNT2
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

MtEmber_Exterior_EventScript_Grunt2::
	lock
	faceplayer
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt2
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
	closemessage
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MtEmber_Exterior_EventScript_DefeatedGrunt2::
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
	release
	end

MtEmber_Exterior_EventScript_BattleGrunt2::
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	msgbox MtEmber_Exterior_Text_Grunt2Intro
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
	release
	end

MtEmber_Exterior_EventScript_RocketPasswordScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
	message MtEmber_Exterior_Text_WhatsPasswordAgain
	waitmessage
	playse SE_PIN
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
	waitmovement 0
	waitbuttonpress
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	call MtEmber_Exterior_EventScript_RocketsFaceDown
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
	releaseall
	end

MtEmber_Exterior_EventScript_Logan::
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end

MtEmber_Exterior_EventScript_Beth::
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end

MtEmber_Exterior_EventScript_Jocelyn::
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

Text_ExplosionTeach::
	.string "こ この かざんが\nもし だいばくはつ したら\lお おれら ひとたまりも\lないなあ …ブルブル!\pこ こわい ついでに\nだいばくはつ でも おぼえてみる?$"

Text_ExplosionDeclined::
	.string "や やっぱ こわいもんな\nブルブル$"

Text_ExplosionWhichMon::
	.string "つ つよきだね!\nじゃあ どの ポケモンに する?$"

Text_ExplosionTaught::
	.string "かざんで だいばくはつを…\nす すごい スリル!$"

MtEmber_Exterior_Text_WellTryDiggingHere::
	.string "ここを ほりすすんで みようぜ\pかんぶが いってた おたから\nこの おくかも しれねえ$"

MtEmber_Exterior_Text_YoureInTheWayGetLost::
	.string "なんだ おまえ?\nじゃまだから あっち いけよ!$"

MtEmber_Exterior_Text_PunchedThroughAtLast::
	.string "フーっ やっと あいたぜ!\nおたからを さがしに いこーぜ$"

MtEmber_Exterior_Text_WhatsPasswordAgain::
	.string "おたからが みつかったら\nそうこに もって かえろーぜ!\p……ところで\nそうこの パスワード って\lなんだったっけ?$"

MtEmber_Exterior_Text_FirstPasswordGoldeen::
	.string "なんだよ わすれたのか\nパスワードは ふたつ あるぜ\pひとつめは……\n『またまた タマタマ』 だろ\pふたつめは……$"

MtEmber_Exterior_Text_SnoopsBeenListeningIn::
	.string "オイっ だれか きいてる!$"

MtEmber_Exterior_Text_Grunt1Intro::
	.string "ぬすみぎき して\nいやがったな!$"

MtEmber_Exterior_Text_Grunt1Defeat::
	.string "えぇー$"

MtEmber_Exterior_Text_Grunt1PostBattle::
	.string "なんで そこで\nかつんだよ$"

MtEmber_Exterior_Text_Grunt2Intro::
	.string "おたからを よこどり\nするき だな!$"

MtEmber_Exterior_Text_Grunt2Defeat::
	.string "あれー$"

MtEmber_Exterior_Text_Grunt2PostBattle::
	.string "さっき きいたことは わすれろよ!$"

MtEmber_Exterior_Text_WellRegroupDontStepInsideThere::
	.string "くそー…\nいちど ひきあげるか\pオマエ! この おくに\nいきやがったら\lただじゃ おかねえぞ!$"

MtEmber_Exterior_Text_LoganIntro::
	.string "ふんか かつどうを しているか\nふんかしそうな かざんを\lかっかざんと いうぞ!$"

MtEmber_Exterior_Text_LoganDefeat::
	.string "ふう…\nあつい しょうぶで あせだくだよ!$"

MtEmber_Exterior_Text_LoganPostBattle::
	.string "かっかざんは せかいに\n1500 いじょう あるというな\lかんがえた だけで あついぜ!$"

MtEmber_Exterior_Text_BethIntro::
	.string "かざんの どうくつは\nどうやって できるか しってる?$"

MtEmber_Exterior_Text_BethDefeat::
	.string "あら! すごいのね$"

MtEmber_Exterior_Text_BethPostBattle::
	.string "マグマの ひょうめんが かたまって\nなかの あつい マグマが\lながれだして しまうと\lなかに どうくつが できるのよ$"

MtEmber_Exterior_Text_JocelynIntro::
	.string "しつれんを いやす ために\nおけいこ がんばって いたら\lつよく なったわ! きえーいっ!$"

MtEmber_Exterior_Text_JocelynDefeat::
	.string "ちからが はいりすぎてた かな?$"

MtEmber_Exterior_Text_JocelynPostBattle::
	.string "あなたの たたかい かた\nあの カレを おもいだして\lつらい…$"

