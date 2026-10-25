AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, AlteringCave_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AlteringCave_OnFrame
	.byte 0

AlteringCave_OnTransition::
	setflag FLAG_LANDMARK_ALTERING_CAVE
	call_if_eq VAR_UNUSED_0x4083, 0, AlteringCave_EventScript_ShowLeaf
	end

AlteringCave_EventScript_ShowLeaf::
	clearflag FLAG_UNUSED_0x2D9
	return

AlteringCave_OnLoad:
	call_if_ge VAR_UNUSED_0x4083, 1, AlteringCave_EventScript_ShowStairs
	random 10
	copyvar VAR_ALTERING_CAVE_WILD_SET, VAR_RESULT
	end

AlteringCave_EventScript_ShowStairs::
	setmetatile 27, 11, METATILE_Cave_Stairs, FALSE
	return

AlteringCave_OnFrame::
	map_script_2 VAR_UNUSED_0x4083, 0, AlteringCave_EventScript_LeafScene
	.2byte 0

AlteringCave_EventScript_LeafScene::
	lockall
	applymovement LOCALID_ALTERING_CAVE_LEAF, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_ALTERING_CAVE_LEAF, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ALTERING_CAVE_LEAF, Common_Movement_Delay48
	waitmovement 0
	delay 25
	playbgm MUS_ENCOUNTER_MAY, FALSE
	msgbox AlteringCave_Text_LeafPreBattle_1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafApproach
	waitmovement 0
	msgbox AlteringCave_Text_LeafPreBattle_2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafMove
	waitmovement 0
	msgbox AlteringCave_Text_LeafPreBattle_3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, AlteringCave_EventScript_No_Thank_You
	msgbox AlteringCave_Text_LeafYes, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CINDY_2, AlteringCave_Text_LeafDefeated
	goto AlteringCave_EventScript_Leaf_PostBattle
	end

AlteringCave_EventScript_Leaf_Again::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_MAY, FALSE
	msgbox AlteringCave_Text_LeafAgain, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, AlteringCave_EventScript_No_Thank_You
	msgbox AlteringCave_Text_LeafYes, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CINDY_2, AlteringCave_Text_LeafDefeated
	goto AlteringCave_EventScript_Leaf_PostBattle_2
	end

AlteringCave_EventScript_No_Thank_You::
	msgbox AlteringCave_Text_LeafNo, MSGBOX_DEFAULT
	setvar VAR_UNUSED_0x4083, 1
	fadedefaultbgm
	release
	end

AlteringCave_EventScript_Leaf_PostBattle::
	playbgm MUS_ENCOUNTER_MAY, FALSE
	msgbox AlteringCave_Text_LeafPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, AlteringCave_Movement_PlayerWatchLeafExit
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafExit
	waitmovement 0
	goto AlteringCave_EventScript_KyouTsuKo
	end

AlteringCave_EventScript_Leaf_PostBattle_2::
	playbgm MUS_ENCOUNTER_MAY, FALSE
	msgbox AlteringCave_Text_LeafPostBattle, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 18, AlteringCave_EventScript_LeafExit_North
	goto_if_eq VAR_0x8004, 19, AlteringCave_EventScript_LeafExit_East
	goto_if_eq VAR_0x8004, 17, AlteringCave_EventScript_LeafExit_West
	end

AlteringCave_EventScript_LeafExit_North::
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8005, 18, AlteringCave_EventScript_LeafExit_South
	goto_if_eq VAR_FACING, DIR_SOUTH, AlteringCave_EventScript_LeafExit_ShortS
	goto_if_eq VAR_0x8005, 22, AlteringCave_EventScript_LeafExit_ShortN
	applymovement LOCALID_PLAYER, AlteringCave_Movement_PlayerWatchLeafExit_North
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafExit2
	waitmovement 0
	goto AlteringCave_EventScript_KyouTsuKo
	end

AlteringCave_EventScript_LeafExit_ShortN::
	applymovement LOCALID_PLAYER, AlteringCave_Movement_PlayerWatchLeafExit_SNorth
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafExit
	waitmovement 0
	goto AlteringCave_EventScript_KyouTsuKo
	end

AlteringCave_EventScript_LeafExit_South::
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafExit2
	waitmovement 0
	goto AlteringCave_EventScript_KyouTsuKo
	end

AlteringCave_EventScript_LeafExit_ShortS::
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafExit
	waitmovement 0
	goto AlteringCave_EventScript_KyouTsuKo
	end

AlteringCave_EventScript_LeafExit_East::
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8005, 21, AlteringCave_EventScript_LeafExit_ShortE
	applymovement LOCALID_PLAYER, AlteringCave_Movement_PlayerWatchLeafExit_East
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafExit2
	waitmovement 0
	goto AlteringCave_EventScript_KyouTsuKo
	end

AlteringCave_EventScript_LeafExit_ShortE::
	applymovement LOCALID_PLAYER, AlteringCave_Movement_PlayerWatchLeafExit_East
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafExit
	waitmovement 0
	goto AlteringCave_EventScript_KyouTsuKo
	end

AlteringCave_EventScript_LeafExit_West::
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8005, 21, AlteringCave_EventScript_LeafExit_ShortE
	applymovement LOCALID_PLAYER, AlteringCave_Movement_PlayerWatchLeafExit_East
	applymovement LOCALID_ALTERING_CAVE_LEAF, AlteringCave_Movement_LeafExit2
	waitmovement 0
	goto AlteringCave_EventScript_KyouTsuKo
	end

AlteringCave_EventScript_KyouTsuKo::
	fadedefaultbgm
	playse SE_EXIT
	delay 35
	removeobject LOCALID_ALTERING_CAVE_LEAF
	setvar VAR_UNUSED_0x4083, 1
	delay 35
	playse SE_DOOR
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_PLAYER, AlteringCave_Movement_Player_Notice
	waitmovement 0
	setmetatile 27, 11, METATILE_Cave_Stairs, FALSE
	msgbox AlteringCave_Text_Door_Open, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

AlteringCave_Movement_LeafApproach::
	walk_down
	walk_down
	step_end

AlteringCave_Movement_LeafMove::
	walk_up
	delay_16
	face_left
	delay_16
	delay_4
	face_right
	delay_16
	delay_4
	walk_down
	delay_16
	step_end

AlteringCave_Movement_LeafExit::
	delay_16
	delay_4
	walk_down
	step_end

AlteringCave_Movement_LeafExit2::
	delay_16
	delay_4
	walk_down
	walk_down
	walk_down
	step_end

AlteringCave_Movement_PlayerWatchLeafExit::
	walk_left
	walk_in_place_faster_right
	step_end

AlteringCave_Movement_PlayerWatchLeafExit_East::
	delay_16
	delay_4
	walk_in_place_faster_down
	step_end

AlteringCave_Movement_PlayerWatchLeafExit_North::
	walk_left
	walk_in_place_faster_right
	delay_16
	delay_4
	walk_in_place_faster_down
	step_end

AlteringCave_Movement_PlayerWatchLeafExit_SNorth::
	walk_left
	walk_in_place_faster_right
	step_end

AlteringCave_Movement_Player_Notice::
	walk_in_place_faster_up
	step_end

AlteringCave_Text_LeafPreBattle_1::
	.string "あれ……?$"

AlteringCave_Text_LeafPreBattle_2::
	.string "めずらしい……\nこんな なんの へんてつも ない\lどうくつに ひとが くるなんて……\pあなたの なまえは?\p…… …… ……\n…… …… ……\pへえ {PLAYER}{KUN}って\nいうんだ おぼえて おくね!\pアタシは リーフ\nとおい ちほうから\lホウエンに りょこうに きているの\pそれにしても この どうくつ……$"

AlteringCave_Text_LeafPreBattle_3::
	.string "じつはね\nこの どうくつ はいるたびに\lしゅつげんする ポケモンが かわる\lふしぎな どうくつ なんだよ!\pそうだ! せっかくだし\nおなじ ポケモントレーナー どうし\lバトル しようよ!$"

AlteringCave_Text_LeafNo::
	.string "あれ?\nじゅんび できてなかった?\pじゃあ ここで まってるから\nじゅんびが できたら\lはなしかけて くれると うれしいな!$"

AlteringCave_Text_LeafAgain::
	.string "ん? じゅんびは できたの?$"

AlteringCave_Text_LeafYes::
	.string "ポケモンを くりだす まえから\nアタシの むねが たかなる……\pボールの なかの ポケモンたちの\nうれしそうな かんじ つたわってくる……\pいくよ!$"

AlteringCave_Text_LeafDefeated::
	.string "あなたって ほんとうに\nすごい トレーナー なのね!!$"

AlteringCave_Text_LeafPostBattle::
	.string "あー たのしかった!\nすごい たたかい だったね!\pじゃあ アタシ そろそろ いくね\nまた どこかで あえると いいな!$"

AlteringCave_Text_Door_Open::
	.string "なにかが ひらいた ような\nおとが した……?$"
