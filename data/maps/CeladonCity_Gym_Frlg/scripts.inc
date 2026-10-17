CeladonCity_Gym_Frlg_MapScripts::
	.byte 0

CeladonCity_Gym_EventScript_Erika::
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
	famechecker FAMECHECKER_ERIKA, 4
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
	release
	end

CeladonCity_Gym_EventScript_DefeatedErika::
	famechecker FAMECHECKER_ERIKA, 1
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
	setflag FLAG_DEFEATED_ERIKA
	setflag FLAG_BADGE04_GET
	set_gym_trainers_frlg 4
	goto CeladonCity_Gym_EventScript_GiveTM19
	end

CeladonCity_Gym_EventScript_GiveTM19::
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
	checkitemspace ITEM_TM19
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_EventScript_NoRoomForTM19
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
	setflag FLAG_GOT_TM19_FROM_ERIKA
	msgbox CeladonCity_Gym_Text_ExplainTM19
	release
	end

CeladonCity_Gym_EventScript_NoRoomForTM19::
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
	release
	end

CeladonCity_Gym_EventScript_Kay::
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Lisa::
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
	famechecker FAMECHECKER_ERIKA, 2
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Tina::
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Bridget::
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Tamia::
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
	famechecker FAMECHECKER_ERIKA, 3
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Lori::
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Mary::
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeladonCity_Gym_Text_GymStatue
	releaseall
	end

CeladonCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeladonCity_Gym_Text_ErikaIntro::
	.string "はあーい…\nよい おてんきね\lきもち いい…\p… すー… すー\n… あら いけない\lねて しまったわ… ようこそ\pわたくし タマムシ ジムの\nエリカと もうします\pおはなを いけるのが しゅみで\nポケモンは くさタイプ ばかり\p… あら やだ\nしあいの もうしこみ ですの?\pそんな…\nわたくし まけませんわよ{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CeladonCity_Gym_Text_ErikaDefeat::
	.string "…!\nまいり ましたわ\lほんとうに おつよい かた…\pこの レインボーバッジ\nさしあげ なくては なりませんね$"

CeladonCity_Gym_Text_ErikaPostBattle::
	.string "あら まあ…\nずかんを つくって ますのね\lほんとに えらいわ\pわたし でしたら\nきれいな ポケモンしか\lほしく なりません もの$"

CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis::
	.string "レインボー バッジで\nレベル50 までの ポケモンが\lおとなしく いうこと きき ます\pそして… かいりきの わざが\nたたかって なくても つかえます\pそれから…\nよろしかったら\lこれも おつかいに なって!$"

CeladonCity_Gym_Text_ReceivedTM19FromErika::
	.string "{PLAYER}は エリカ から\nわざマシン19を もらった!$"

CeladonCity_Gym_Text_ExplainTM19::
	.string "わざマシン19の なかは\nギガドレイン です\pあたえた ダメージの はんぶんが\nポケモンの えいように なる\lすばらしい わざ です$"

CeladonCity_Gym_Text_ShouldMakeRoomForThis::
	.string "おにもつ いっぱい$"

CeladonCity_Gym_Text_KayIntro::
	.string "ここは ねー!\pおしとやかな おんなのこ しか\nはいっちゃ いけないの!$"

CeladonCity_Gym_Text_KayDefeat::
	.string "らんぼう なんだから$"

CeladonCity_Gym_Text_KayPostBattle::
	.string "べー!\nエリカさんに\lやられ ちゃえば いいのよ$"

CeladonCity_Gym_Text_BridgetIntro::
	.string "あら いらっしゃい\nたいくつ してたのよ!$"

CeladonCity_Gym_Text_BridgetDefeat::
	.string "やんなっちゃう$"

CeladonCity_Gym_Text_BridgetPostBattle::
	.string "くさに よわい のは\nみず タイプ だけ じゃ ないわ\pじめん タイプ と いわ タイプも\nわたし たちの えじきよ!$"

CeladonCity_Gym_Text_TinaIntro::
	.string "あれー! あんた さっき\nここ のぞいて なかった…?$"

CeladonCity_Gym_Text_TinaDefeat::
	.string "おめめ ぱちくり$"

CeladonCity_Gym_Text_TinaPostBattle::
	.string "エリカさんを みてたのか…\nあたしじゃ なかったのね$"

CeladonCity_Gym_Text_TamiaIntro::
	.string "ねえ… みて!\nこれ わたしの ポケモン!\pくさ タイプは そだてる のが\nらくな ところが いいわ$"

CeladonCity_Gym_Text_TamiaDefeat::
	.string "やーん!$"

CeladonCity_Gym_Text_TamiaPostBattle::
	.string "うちの ジムは つかう ポケモン\nぜーんぶ くさ タイプ!\pだって ポケモンジムの ほかに\nいけばな きょうしつ やってるから$"

CeladonCity_Gym_Text_LisaIntro::
	.string "こら! むし ポケモン とか\nほのお ポケモン は きらい なの\lここに もち こまないでよ!$"

CeladonCity_Gym_Text_LisaDefeat::
	.string "あ! こいつう!$"

CeladonCity_Gym_Text_LisaPostBattle::
	.string "きみねー! リーダーの エリカさんは\nおしとやか だけど このへん じゃ\lゆうめいな トレーナー なんだから!$"

CeladonCity_Gym_Text_LoriIntro::
	.string "あなた ごしゅみは…?\n… はい!\lポケモンを しょうしょう$"

CeladonCity_Gym_Text_LoriDefeat::
	.string "けっこうな おてまえで$"

CeladonCity_Gym_Text_LoriPostBattle::
	.string "わたし らいしゅう おみあい なの\nポケモン さそわれても はしたない\lたたかい しない ように しなきゃ$"

CeladonCity_Gym_Text_MaryIntro::
	.string "タマムシ ジムに ようこそ!\pやさしそうな おねえさん たちに\nゆだん しない ほうが いいわよ!$"

CeladonCity_Gym_Text_MaryDefeat::
	.string "やる じゃない!$"

CeladonCity_Gym_Text_MaryPostBattle::
	.string "きょうは つよい ポケモン\nもって こなかった から…\pこんど やる ときは まけないわ$"

CeladonCity_Gym_Text_GymStatue::
	.string "タマムシ ポケモン ジム\nエリカ にんてい トレーナー!\l{RIVAL}$"

CeladonCity_Gym_Text_GymStatuePlayerWon::
	.string "タマムシ ポケモン ジム\nエリカ にんてい トレーナー!\l{RIVAL} {PLAYER}$"

