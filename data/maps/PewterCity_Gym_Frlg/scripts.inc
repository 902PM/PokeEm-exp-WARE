PewterCity_Gym_Frlg_MapScripts::
	.byte 0

PewterCity_Gym_EventScript_Brock::
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
	msgbox PewterCity_Gym_Text_BrockPostBattle
	release
	end

PewterCity_Gym_EventScript_DefeatedBrock::
	famechecker FAMECHECKER_BROCK, 1
	setflag FLAG_DEFEATED_BROCK
	setflag FLAG_BADGE01_GET
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
	set_gym_trainers_frlg 1
	goto PewterCity_Gym_EventScript_GiveTM39
	end

PewterCity_Gym_EventScript_GiveTM39::
	msgbox PewterCity_Gym_Text_TakeThisWithYou
	checkitemspace ITEM_TM39
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
	setflag FLAG_GOT_TM39_FROM_BROCK
	msgbox PewterCity_Gym_Text_ExplainTM39
	release
	end

PewterCity_Gym_EventScript_NoRoomForTM39::
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
	release
	end

PewterCity_Gym_EventScript_Liam::
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
	end

PewterCity_Gym_EventScript_GymGuyPostVictory::
	msgbox PewterCity_Gym_Text_YoureChampMaterial
	release
	end

PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
	msgbox PewterCity_Gym_Text_LetsGetHappening
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end

PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
	goto PewterCity_Gym_EventScript_GymGuyAdvice
	end

PewterCity_Gym_EventScript_GymGuyAdvice::
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
	release
	end

PewterCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
	msgbox PewterCity_Gym_Text_GymStatue
	releaseall
	end

PewterCity_Gym_EventScript_GymStatuePostVictory::
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

PewterCity_Gym_Text_BrockIntro::
	.string "きたな!\nおれは ニビ ポケモン ジム\lリーダーの タケシ!\pおれの かたい いしは\nおれの ポケモンにも あらわれる!\lかたくて がまん づよい!\pそう! つかうのは\nいわ タイプ ばっかりだ!\pふはは!\nまけると わかってて たたかうか!\lポケモン トレーナーの さがだな\lいいだろう!\lかかって こい!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PewterCity_Gym_Text_BrockDefeat::
	.string "きみを\nみくびって いた ようだ\pぼくに かった あかしに\nポケモン リーグ こうにん\lグレー バッジを さずけよう!\p{FONT_NORMAL}{PLAYER}は タケシから\nグレー バッジを もらった!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p{FONT_MALE}グレー バッジを つけてると\nそれだけで\lきみの ポケモンは つよくなる!\pフラッシュ という わざを\nもっている ポケモンは\lたたかって なくても フラッシュを\lつかえる ように なる!$"

PewterCity_Gym_Text_TakeThisWithYou::
	.string "あと… そうだ!\nこれを きみに あげよう!$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
	.string "{PLAYER}は タケシから\nわざマシン39を もらった!$"

PewterCity_Gym_Text_ExplainTM39::
	.string "わざマシンを つかうと ポケモンは\nすぐ その わざを おぼえる!\lただし マシンは つかい すてだ!\lどの ポケモンに おぼえさせるか\lよく かんがえた ほうが いい\pところで…\nわざマシン39には\lがんせきふうじ が はいっている!\pいわを あいてに なげつけて\nすばやさを さげて しまう\lおもしろい わざだ!$"

PewterCity_Gym_Text_BrockPostBattle::
	.string "この ひろい せかいでは\nいろんな やつが ポケモンで\lたたかいを くりひろげてる!\pきみには\nポケモン トレーナーの\lさいのうが ある ようだ!\pハナダ シティの ジムにも いき\nきみの ちからを\lためして みると いい$"

PewterCity_Gym_Text_DontHaveRoomForThis::
	.string "もちものが いっぱいだ$"

PewterCity_Gym_Text_LiamIntro::
	.string "まちなー!\pこどもが なんの ようだ!\nタケシさんに ちょうせん なんて\l10000こうねん はやいんだよ!$"

PewterCity_Gym_Text_LiamDefeat::
	.string "しまった!\p10000こうねんは… …\nじかん じゃない!\l… … きょり だ!$"

PewterCity_Gym_Text_LiamPostBattle::
	.string "おまえ なかなか やるな!\nタケシさん ほどじゃ ないけどな$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
	.string "おっす!\nポケモン チャンピオンを\lめざして みないか?\pおれは トレーナー じゃない\nしかし かつ ために ばっちり\lアドバイス できるぜ!\pな…! いっしょに\nポケモン チャンピオン めざそうぜ$"

PewterCity_Gym_Text_LetsGetHappening::
	.string "よっしゃーッ!\nじゃ さっそく…!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
	.string "しょうぶの さいしょに とびだす\nポケモンは…\lポケモン リストの\lひだりがわの やつだ!\pリストの じゅんばんを かえれば\nゆうりに なることも ある!\lためして みなよ!$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
	.string "えんりょは いらんぜ!\nじゃ さっそく…!$"

PewterCity_Gym_Text_YoureChampMaterial::
	.string "さすがだな!\nこの ちょうしで めざせ!\lポケモン チャンピオン!$"

PewterCity_Gym_Text_GymStatue::
	.string "ニビ ポケモン ジム\nタケシ にんてい トレーナー!\l{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
	.string "ニビ ポケモン ジム\nタケシ にんてい トレーナー!\l{RIVAL} {PLAYER}$"

