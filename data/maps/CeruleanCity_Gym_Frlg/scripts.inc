CeruleanCity_Gym_Frlg_MapScripts::
	.byte 0

CeruleanCity_Gym_EventScript_Misty::
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
	msgbox CeruleanCity_Gym_Text_ExplainTM03
	release
	end

CeruleanCity_Gym_EventScript_MistyDefeated::
	famechecker FAMECHECKER_MISTY, 1
	setflag FLAG_DEFEATED_MISTY
	setflag FLAG_BADGE02_GET
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	set_gym_trainers_frlg 2
	goto CeruleanCity_Gym_EventScript_GiveTM03
	end

CeruleanCity_Gym_EventScript_GiveTM03::
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
	checkitemspace ITEM_TM03
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_EventScript_NoRoomForTM03
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
	setflag FLAG_GOT_TM03_FROM_MISTY
	msgbox CeruleanCity_Gym_Text_ExplainTM03
	release
	end

CeruleanCity_Gym_EventScript_NoRoomForTM03::
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
	release
	end

CeruleanCity_Gym_EventScript_Diana::
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_Luis::
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
	famechecker FAMECHECKER_MISTY, 2
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuyPostVictory
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
	release
	end

CeruleanCity_Gym_EventScript_GymGuyPostVictory::
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
	release
	end

CeruleanCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeruleanCity_Gym_Text_GymStatue
	releaseall
	end

CeruleanCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeruleanCity_Gym_Text_MistyIntro::
	.string "あのね きみ!\pポケモン そだてる にも\nポリシーが ある やつ だけが\lプロに なれるの!\pあなたは ポケモン つかまえて\nそだてる とき\lなにを かんがえてる?\pわたしの ポリシーはね…\pみず タイプ ポケモンで せめて\nせめて …せめまくる ことよ!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CeruleanCity_Gym_Text_ExplainTM03::
	.string "わざマシン03は みずのはどうを\nポケモンに おしえるの\pみずに すむ ポケモンに\nつかって あげて!$"

CeruleanCity_Gym_Text_ExplainCascadeBadge::
	.string "ブルー バッジが あれば\nレベル30までの ポケモンは\lおとなしく いうこと きくわ!\pそれが たとえ\nひとから もらった ポケモンでもね\pそれと たたかって なくても\nいあいぎりが つかえるわ\pほそい きを きりたおして\nとおれる ように なるの\p… あと これは わたしの\nじまんの わざマシンよ!$"

CeruleanCity_Gym_Text_ReceivedTM03FromMisty::
	.string "{PLAYER}は カスミから\nわざマシン03を もらった!$"

CeruleanCity_Gym_Text_BetterMakeRoomForThis::
	.string "にもつ いっぱいね$"

CeruleanCity_Gym_Text_MistyDefeat::
	.string "うーん…!\nわたしの まけね\pしょうが ない!\pわたしに かった しょうこに\nブルー バッジを あげる!$"

CeruleanCity_Gym_Text_DianaIntro::
	.string "きみ なんて\nあたしで じゅうぶん!\pカスミが でる まく じゃないわ$"

CeruleanCity_Gym_Text_DianaDefeat::
	.string "まいったわ!$"

CeruleanCity_Gym_Text_DianaPostBattle::
	.string "いろんな ポケモン トレーナーと\nたたかって みないと\lじぶんの つよさ わからない ものね$"

CeruleanCity_Gym_Text_LuisIntro::
	.string "おわっぷ!\pまずは おれが あいてだ!\nかかって こい!$"

CeruleanCity_Gym_Text_LuisDefeat::
	.string "こんな はずは ない$"

CeruleanCity_Gym_Text_LuisPostBattle::
	.string "カスミは これから まだまだ\nつよくなる トレーナーだ!\pおまえ なんかにゃ\nまけたり しないよ$"

CeruleanCity_Gym_Text_GymGuyAdvice::
	.string "おーす!\nみらいの チャンピオン!\pアドバイス しよう!\pここの リーダー カスミは\nみずに すむ ポケモンを つかう\lプロフェッショナルだ!\pこんな ときは しょくぶつ タイプで\nみずを すいとる さくせんだ\p… それか でんき タイプで\nしびれ させるのも いいぜ$"

CeruleanCity_Gym_Text_WeMakePrettyGoodTeam::
	.string "カスミに かったな!\nおれの いった とおり だったろ?\pおまえも すごいが\nおれも すごいだろ?$"

CeruleanCity_Gym_Text_GymStatue::
	.string "ハナダ ポケモン ジム\nカスミ にんてい トレーナー!\l{RIVAL}$"

CeruleanCity_Gym_Text_GymStatuePlayerWon::
	.string "ハナダ ポケモン ジム\nカスミ にんてい トレーナー!\l{RIVAL} {PLAYER}$"

