FuchsiaCity_Gym_Frlg_MapScripts::
	.byte 0

FuchsiaCity_Gym_EventScript_Koga::
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_GiveTM06
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
	release
	end

FuchsiaCity_Gym_EventScript_DefeatedKoga::
	famechecker FAMECHECKER_KOGA, 1
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
	setflag FLAG_DEFEATED_KOGA
	setflag FLAG_BADGE05_GET
	set_gym_trainers_frlg 5
	goto FuchsiaCity_Gym_EventScript_GiveTM06
	end

FuchsiaCity_Gym_EventScript_GiveTM06::
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
	checkitemspace ITEM_TM06
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_EventScript_NoRoomForTM06
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
	setflag FLAG_GOT_TM06_FROM_KOGA
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
	release
	end

FuchsiaCity_Gym_EventScript_NoRoomForTM06::
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
	release
	end

FuchsiaCity_Gym_EventScript_Phil::
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Edgar::
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Kirk::
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
	famechecker FAMECHECKER_KOGA, 2
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Shawn::
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Kayden::
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

FuchsiaCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuyPostVictory
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
	release
	end

FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
	release
	end

FuchsiaCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
	msgbox FuchsiaCity_Gym_Text_GymStatue
	releaseall
	end

FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

FuchsiaCity_Gym_Text_KogaIntro::
	.string "キョウ『… ファ ファ ファ!\pこわっぱ ごときが\nせっしゃに たたかいを いどむとは\lかたはら いたいわ!\p… どくを くらったら じめつ!\nねむって しまったら むていこう\p… しのびの わざの ごくい!\nどくポケモンの おそろしさ!\lうけて みるが よい!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

FuchsiaCity_Gym_Text_KogaDefeat::
	.string "ふん…!\nおぬし やりおるな!\pそら!\nピンク バッジを うけとれ!$"

FuchsiaCity_Gym_Text_KogaPostBattle::
	.string "どくどくは どくを あびたら\n1ターン ごとに どんどん\lダメージが おおきく なる!\pこれは あいてに\nきょうふを あたえる わざ なのだ!$"

FuchsiaCity_Gym_Text_KogaExplainSoulBadge::
	.string "ピンク バッジを もって おれば\nおぬしの ポケモンの\lぼうぎょ りょくを あげる!\pたたかって ない ときでも\nなみのりの わざを\lつかえる ように なる!\pそうだ…! これを おぬしに!$"

FuchsiaCity_Gym_Text_ReceivedTM06FromKoga::
	.string "{PLAYER}は キョウ から\nわざマシン06を もらった!$"

FuchsiaCity_Gym_Text_KogaExplainTM06::
	.string "400ねん むかし より\nわがやに つたわる ポケモン わざ\pわざマシン06には ごくい!\nどくどくが ふういん してある!$"

FuchsiaCity_Gym_Text_MakeSpaceForThis::
	.string "にもつが いっぱいだ$"

FuchsiaCity_Gym_Text_KaydenIntro::
	.string "ただ つよい だけでは だめだ!\n… わかるか?\pポケモンは テクニックだ!\pこの ジムに きた から には\nそういう ポケモンの おく ふかさ\lタップリ おしえて やる!$"

FuchsiaCity_Gym_Text_KaydenDefeat::
	.string "…!\nただもの では ない!$"

FuchsiaCity_Gym_Text_KaydenPostBattle::
	.string "こどもの トレーナー とはいえ\nパワー だけでなく\lテクニックも みがいてるな!$"

FuchsiaCity_Gym_Text_KirkIntro::
	.string "マジシャン だった おれは\nニンジャに あこがれて\lこの セキチク ジムに はいった!$"

FuchsiaCity_Gym_Text_KirkDefeat::
	.string "… やられた!$"

FuchsiaCity_Gym_Text_KirkPostBattle::
	.string "たとえ まけても おれは\nニンジャ マスター\lキョウの おしえに いきる つもりだ$"

FuchsiaCity_Gym_Text_NateIntro::
	.string "おれの ポケモン あやしの わざ\nたっぷりと あじわいな!$"

FuchsiaCity_Gym_Text_NateDefeat::
	.string "… そうか!\nおまえも わざ つかいか?$"

FuchsiaCity_Gym_Text_NatePostBattle::
	.string "たたかい おわった あとでも\nどく ねむり といった こうかは\lのこる ところが すき だぜ!$"

FuchsiaCity_Gym_Text_PhilIntro::
	.string "おっと! まちな!\pセキチク ジムの めいぶつ\nみえない かべ システムは どうだ$"

FuchsiaCity_Gym_Text_PhilDefeat::
	.string "… ほお!\nやる じゃないか!$"

FuchsiaCity_Gym_Text_PhilPostBattle::
	.string "おまえは ほねが ありそう だ!\nとくべつに ヒントを おしえよう!\pみえない かべは よく みると\nしきりが みえて くる…!$"

FuchsiaCity_Gym_Text_EdgarIntro::
	.string "この おれも\nニンジャ キョウの もんかせい!\pニンジャは むかし から\nよく どうぶつを つかった という$"

FuchsiaCity_Gym_Text_EdgarDefeat::
	.string "がおーん…!$"

FuchsiaCity_Gym_Text_EdgarPostBattle::
	.string "まだ まだ!\nおれには しゅぎょうが たりない$"

FuchsiaCity_Gym_Text_ShawnIntro::
	.string "ここの リーダー キョウは\nイガ ニンジャの しそんだ!\pおいッ!\nおまえは なにの しそん なんだ?$"

FuchsiaCity_Gym_Text_ShawnDefeat::
	.string "なかなか できるな!$"

FuchsiaCity_Gym_Text_ShawnPostBattle::
	.string "… ひかり ある ところに\nかげが ある!\pひかりと かげ!\nおまえは どちらを えらぶ?$"

FuchsiaCity_Gym_Text_GymGuyAdvice::
	.string "おーす!\nみらいの チャンピオン!\pセキチク ジムは からくり やしき\nみえない かべで しきられてる!\pキョウの やつは すぐ そこに\nいる ように みえるが…\pみえない かべの とぎれてる とこを\nさがし ださないと あえないぜ!$"

FuchsiaCity_Gym_Text_GymGuyPostVictory::
	.string "げんだいに なお いき のこる\nニンジャの こわさを みたな!$"

FuchsiaCity_Gym_Text_GymStatue::
	.string "セキチク ポケモン ジム\nキョウ にんてい トレーナー!\l{RIVAL}$"

FuchsiaCity_Gym_Text_GymStatuePlayerWon::
	.string "セキチク ポケモン ジム\nキョウ にんてい トレーナー!\l{RIVAL} {PLAYER}$"

