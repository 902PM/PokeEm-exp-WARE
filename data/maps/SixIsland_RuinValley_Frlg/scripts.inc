SixIsland_RuinValley_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
	.byte 0

SixIsland_RuinValley_OnLoad::
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
	end

SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
	return

SixIsland_RuinValley_EventScript_Scientist::
	lock
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SixIsland_RuinValley_EventScript_DottedHoleDoor::
	lockall
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
	braillemsgbox Braille_Text_Cut
	releaseall
	end

SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
	releaseall
	end

SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
	releaseall
	end

SixIsland_RuinValley_Text_CantFigureOutHowToGetInside::
	.string "いったい どうやって\nはいるんだ ここは…?$"

SixIsland_RuinValley_Text_IFoundThisPlace::
	.string "ここは ぼくが\nみつけた ばしょだぞ!\lものほしそうに みんなよ$"

SixIsland_RuinValley_Text_CheckDoorMoreThoroughly::
	.string "とびらは びくとも しない!\nもっと よく しらべて みますか?$"

SixIsland_RuinValley_Text_LeftDoorAlone::
	.string "{PLAYER}は とびらを\nそのままに しておいた$"

SixIsland_RuinValley_Text_SeveralDotsOnTheDoor::
	.string "よくみると\nとびらに いくつかの てんが…?$"

SixIsland_RuinValley_Text_DoorIsOpen::
	.string "とびらが ひらいている!$"

SixIsland_RuinValley_Text_StanlyIntro::
	.string "この せかい には\nひみつが いっぱい ありそうだ!$"

SixIsland_RuinValley_Text_StanlyDefeat::
	.string "ふむ…$"

SixIsland_RuinValley_Text_StanlyPostBattle::
	.string "きみも いちにち いっかいは\nこのよの ひみつに ついて\lかんがえて みたまえ$"

SixIsland_RuinValley_Text_FosterIntro::
	.string "きみは なにしに ここへ?$"

SixIsland_RuinValley_Text_FosterDefeat::
	.string "ひさしぶりの しょうぶで\nカンが くるっとる$"

SixIsland_RuinValley_Text_FosterPostBattle::
	.string "ナナシマの いせきは\nいくつか あるが\lかなり むかしから\lある ものが おおい$"

SixIsland_RuinValley_Text_LarryIntro::
	.string "この しまには\nふしぎな いしが\lあると いわれて いる!\pあの いせきが あやしいのだが…$"

SixIsland_RuinValley_Text_LarryDefeat::
	.string "おお これはこれは$"

SixIsland_RuinValley_Text_LarryPostBattle::
	.string "あそこに ある いせき…\nどうやって はいったら いいのか\lまだ わかって いないんじゃ$"

SixIsland_RuinValley_Text_DarylIntro::
	.string "たかい ところで\nきみと しょうぶ…!$"

SixIsland_RuinValley_Text_DarylDefeat::
	.string "きみに あっさり\nまける かなしみ…!$"

SixIsland_RuinValley_Text_DarylPostBattle::
	.string "たかい ところに\nのぼる よろこび…!$"

SixIsland_RuinValley_Text_HectorIntro::
	.string "このへんなら オレが\nくわしいぜ!$"

SixIsland_RuinValley_Text_HectorDefeat::
	.string "そんなに がんばらなくても\nおしえてやる って!$"

SixIsland_RuinValley_Text_HectorPostBattle::
	.string "あの いせきの とびらには\nふしぎな もようが\lきざまれて いるんだぜ\p…いみは わかんない けど$"

