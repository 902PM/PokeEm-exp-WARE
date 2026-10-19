Route24_Frlg_MapScripts::
	.byte 0

Route24_EventScript_Rocket::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_ROUTE24, 1, Route24_EventScript_RocketPostBattle
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNugget
	call Route24_EventScript_BattleRocket
	release
	end

Route24_EventScript_NoRoomForNugget::
	msgbox Route24_Text_YouDontHaveAnyRoom
	release
	end

Route24_EventScript_RocketPostBattle::
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	release
	end

Route24_EventScript_RocketTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketTriggerRight::
	lockall
	setvar VAR_TEMP_1, 1
	goto Route24_EventScript_RocketTrigger
	end

Route24_EventScript_RocketTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketApproachPlayer
	call_if_eq VAR_TEMP_1, 1, Route24_EventScript_RocketMotionToPlayer
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNuggetTrigger
	call Route24_EventScript_BattleRocket
	releaseall
	end

Route24_EventScript_BattleRocket::
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
	message Route24_Text_JoinTeamRocket
	waitmessage
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	waitbuttonpress
	setvar VAR_LAST_TALKED, LOCALID_ROUTE24_ROCKET
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	setvar VAR_MAP_SCENE_ROUTE24, 1
	return

Route24_EventScript_RocketApproachPlayer::
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketApproachPlayer
	waitmovement 0
	return

Route24_EventScript_RocketMotionToPlayer::
	applymovement LOCALID_ROUTE24_ROCKET, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

Route24_EventScript_NoRoomForNuggetTrigger::
	msgbox Route24_Text_YouDontHaveAnyRoom
	closemessage
	applymovement LOCALID_PLAYER, Route24_Movement_WalkDown
	waitmovement 0
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketWalkBackToPos
	release
	end

Route24_EventScript_RocketWalkBackToPos::
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketWalkBackToPos
	waitmovement 0
	return

Route24_Movement_RocketApproachPlayer::
	walk_left
	step_end

Route24_Movement_RocketWalkBackToPos::
	walk_right
	walk_in_place_faster_left
	step_end

Route24_Movement_WalkDown::
	walk_down
	step_end

Route24_Text_JustEarnedFabulousPrize::
	.string "おみごとーッ!\n5にんぬき おめでとう!\pしょうひんに\nこれを プレゼント しよう!$"

Route24_Text_ReceivedNuggetFromMysteryTrainer::
	.string "{PLAYER}は なぞのトレーナーから\nきんのたまを もらった!$"

Route24_Text_YouDontHaveAnyRoom::
	.string "もちものが いっぱいだ$"

Route24_Text_JoinTeamRocket::
	.string "ところで… ここだけの はなし\nロケットだんに はいらない?\pおれたちは\nポケモンを わるいことに\lつかおうっていう グループだ!\pはいりなよ\pはいらないの?\pはいってよ!\pはいれよ!\p… ことわるって かお してんな\pそれなら…!\nむりやり いれて やる!\lうりゃーッ!$"

Route24_Text_RocketDefeat::
	.string "おまえ…!\nホント つええな!$"

Route24_Text_YoudBecomeTopRocketLeader::
	.string "それだけの うでが あれば\nロケットだん でも\lえらく なれるのに もったいないぜ!$"

Route24_Text_ShaneIntro::
	.string "ふふ…ッ! くさむらから\nきみの かつやくを みてたよ$"

Route24_Text_ShaneDefeat::
	.string "… やっぱり だめだ$"

Route24_Text_ShanePostBattle::
	.string "… はしを わたるのが こわくて\nずっと ここに かくれてたんだ$"

Route24_Text_EthanIntro::
	.string "きえーいッ! 5にんめ!\nおれが あいてだあ!$"

Route24_Text_EthanDefeat::
	.string "たいした もんだ!$"

Route24_Text_EthanPostBattle::
	.string "ベストを つくしたんだ\nくいは ない!$"

Route24_Text_ReliIntro::
	.string "4にんめは わたしよ!\nそろそろ ばてて\lきたんじゃない?$"

Route24_Text_ReliDefeat::
	.string "わたしも まけたのね$"

Route24_Text_ReliPostBattle::
	.string "ベストを つくしたんだから\nくいは ないわ!$"

Route24_Text_TimmyIntro::
	.string "3にんめ とうじょう!\nそう かんたんには いかないぜ!$"

Route24_Text_TimmyDefeat::
	.string "へろへろ もう ダメ$"

Route24_Text_TimmyPostBattle::
	.string "ベストを つくしたんだ\nくいは ない!$"

Route24_Text_AliIntro::
	.string "ふたりめは わたし!\nこれからが ほんばん よ!$"

Route24_Text_AliDefeat::
	.string "しんじらんなーい$"

Route24_Text_AliPostBattle::
	.string "ベストを つくしたんだから\nくいは ないわ!$"

Route24_Text_CaleIntro::
	.string "この はしは ひと よんで\nゴールデンボール ブリッジ!\p5にん かちぬけば\nごうかな しょうひんが もらえる!\pさて!\nおまえに ぬけられるかな?$"

Route24_Text_CaleDefeat::
	.string "なかなか やるじゃん$"

Route24_Text_CalePostBattle::
	.string "ベストを つくしたんだ\nくいは ない!$"

