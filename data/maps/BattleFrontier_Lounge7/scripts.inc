BattleFrontier_Lounge7_MapScripts::
	.byte 0

@special ChooseMonForMoveTutor
BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor::
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
	case 6, BattleFrontier_Lounge7_EventScript_ThunderWave
	case 7, BattleFrontier_Lounge7_EventScript_SwordsDance
	case 8, BattleFrontier_Lounge7_EventScript_RockSlide
	case 9, BattleFrontier_Lounge7_EventScript_Counter
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
	case 6, BattleFrontier_Lounge7_EventScript_ThunderWave
	case 7, BattleFrontier_Lounge7_EventScript_SwordsDance
	case 8, BattleFrontier_Lounge7_EventScript_RockSlide
	case 9, BattleFrontier_Lounge7_EventScript_Counter
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_Softboiled::
	setvar VAR_0x8008, 4
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_SeismicToss::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_ROOST
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_DreamEater::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_SCALD
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MegaPunch::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MegaKick::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_DRAGON_PULSE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_BodySlam::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_FLIP_TURN
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RockSlide::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_POLTERGEIST
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Counter::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_DRACO_METEOR
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ThunderWave::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_SwordsDance::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RightMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor::
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
	case 1, BattleFrontier_Lounge7_EventScript_IcePunch
	case 2, BattleFrontier_Lounge7_EventScript_ThunderPunch
	case 3, BattleFrontier_Lounge7_EventScript_FirePunch
	case 4, BattleFrontier_Lounge7_EventScript_Snore
	case 5, BattleFrontier_Lounge7_EventScript_MudSlap
	case 6, BattleFrontier_Lounge7_EventScript_Swift
	case 7, BattleFrontier_Lounge7_EventScript_IcyWind
	case 8, BattleFrontier_Lounge7_EventScript_Endure
	case 9, BattleFrontier_Lounge7_EventScript_PsychUp
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
	case 1, BattleFrontier_Lounge7_EventScript_IcePunch
	case 2, BattleFrontier_Lounge7_EventScript_ThunderPunch
	case 3, BattleFrontier_Lounge7_EventScript_FirePunch
	case 4, BattleFrontier_Lounge7_EventScript_Snore
	case 5, BattleFrontier_Lounge7_EventScript_MudSlap
	case 6, BattleFrontier_Lounge7_EventScript_Swift
	case 7, BattleFrontier_Lounge7_EventScript_IcyWind
	case 8, BattleFrontier_Lounge7_EventScript_Endure
	case 9, BattleFrontier_Lounge7_EventScript_PsychUp
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_DefenseCurl::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_DRAIN_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Snore::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_POWER_UP_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MudSlap::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_DUAL_CHOP
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Swift::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_DUAL_WINGBEAT
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_IcyWind::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_EARTH_POWER
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Endure::
	setvar VAR_0x8008, 12
	setvar VAR_0x8005, MOVE_HYPER_VOICE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_PsychUp::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_OUTRAGE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_IcePunch::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ThunderPunch::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_FirePunch::
	setvar VAR_0x8008, 8
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_CancelChooseMon::
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

@ VAR_0x8008 is the price
@ VAR_TEMP_C is the scroll multichoice ID
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge7_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
	end


BattleFrontier_Lounge7_EventScript_TeachTutorMove::
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
	waitstate
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge7_EventScript_CancelChooseMon
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

BattleFrontier_Lounge7_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_Sailor::
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
	end

BattleFrontier_Lounge7_EventScript_Gentleman::
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
	end

BattleFrontier_Lounge7_Text_LeftTutorIntro:
	.string "{JPN}ぶはははっ!\pあたしゃ こうみえても わかいころは\nそりゃー つよい トレーナーでよー\pさいきょうの おとなの おねえさんと して\nもー バリバリ いわしとったわ!\p…… … ……ん?\pなんじゃ あんた しんじとらんのかっ!?\pあたしゃ むこうの くちだけ ばあさんとは\nさいのうが ちがうんじゃっ!\pしょうこに あんたの ポケモンに\nすぺしゃる かつ きゅーとな わざの\lかずかずを おしえたろうかいなっ!!\pまあ じゅぎょうりょう ちゅう ことで\nちいと ばかし バトルポイントを\lいただくがのう!$"

BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack:
	.string "{JPN}ぶはははっ!\pあたしゃの\nすぺしゃる かつ きゅーとな わざを\lおそわりに きたんかー!?$"

BattleFrontier_Lounge7_Text_TeachWhichMove:
	.string "{JPN}ほれほれー どのわざを おぼえたいんじゃ?$"

BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints:
	.string "{JPN}{STR_VAR_1} が ええのんか!\n{STR_VAR_2} BP じゃが ええんじゃの!?$"

BattleFrontier_Lounge7_Text_TeachMoveToWhichMon:
	.string "{JPN}ほいじゃあ わざを おぼえさせる\nポケモンを きめて おくれ!$"

BattleFrontier_Lounge7_Text_HaventGotEnoughPoints:
	.string "{JPN}なんじゃ……\nあんた バトルポイントが たりんぞ!$"

BattleFrontier_Lounge7_Text_IllTakeBattlePoints:
	.string "{JPN}あたしゃの すごさが わかったかいっ!!\nじゃあ バトルポイントは いただくぞぃ!$"

BattleFrontier_Lounge7_Text_YouDontWantTo:
	.string "{JPN}なんじゃ? やめるんか……\pあたしゃの すごさを しりたかったら\nいつでも くるが ええぞぃ!$"

BattleFrontier_Lounge7_Text_RightTutorIntro:
	.string "{JPN}いひひひっ!\pあたしゃ こうみえても わかいころは\nそりゃー つよい トレーナーでよー\pむてきの ビキニの おねえさんと して\nもー ブイブイ いわしとったわ!\p…… …… ……ん?\pなんじゃ あんた しんじとらんのかっ!?\pあたしゃ むこうの くちだけ ばあさんと\nちがって じつりょくが あるんじゃっ!\pしょうこに あんたの ポケモンに\nはーど かつ ぷりてぃな わざの\lかずかずを おしえたろうかいなっ!\pまあ じゅぎょうりょう ちゅう ことで\nちいと ばかし バトルポイントを\lいただくがのう!$"

BattleFrontier_Lounge7_Text_RightTutorWelcomeBack:
	.string "{JPN}いひひひっ!\pあたしゃの\nはーど かつ ぷりてぃな わざを\lおそわりに きたんかー!?$"

BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong:
	.string "{JPN}あの ふたりって おたがいの\nわるぐち いい あってる から\lなかが わるいとか おもって ないか?\pでも ほんとに そう だったら いっしょに\nこんなところに いたり しないよな$"

BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful:
	.string "{JPN}わたしが まだ たんぱんこぞう だったころ\nつよく うつくしい かのじょ たちは\lトレーナー みんなの アイドル でした\pいまも その わざの キレは\nおとろえる どころか\lますます みがきが かかっている ようです\pだが…… なぜか こう おもうのです……\pじかんと いうものは\nざんこくな もの ですね……$"

BattleFrontier_Lounge7_Text_SoftboiledDesc::
	.string "{JPN}あいてが きのみを\nもっているとき たべて\nそのこうかを うけられる$"

BattleFrontier_Lounge7_Text_SeismicTossDesc::
	.string "{JPN}じめんに おりて\nたいりょくの\nはんぶんだけ かいふくする$"

BattleFrontier_Lounge7_Text_DreamEaterDesc::
	.string "{JPN}あつくにえたぎる みずを\nはっしゃ\nやけどに することがある$"

BattleFrontier_Lounge7_Text_MegaPunchDesc::
	.string "{JPN}はがねのような あたまで\nこうげき てきを\nひるませることがある$"

BattleFrontier_Lounge7_Text_MegaKickDesc::
	.string "{JPN}おおきな くちから\nしょうげきはをまきおこして\nてきを こうげきする$"

BattleFrontier_Lounge7_Text_BodySlamDesc::
	.string "{JPN}こうげき したあと\nものすごい スピードで\nもどってきて いれかわる$"

BattleFrontier_Lounge7_Text_RockSlideDesc::
	.string "{JPN}てきのどうぐを あやつって\nこうげき どうぐを\nもっていないとしっぱいする$"

BattleFrontier_Lounge7_Text_CounterDesc::
	.string "{JPN}てんくうから いんせきを\nおとすが とくこうが\nがくっと さがってしまう$"

BattleFrontier_Lounge7_Text_ThunderWaveDesc::
	.string "{JPN}よわい でんげきを\nぶつけて あいてを\nまひ させる$"

BattleFrontier_Lounge7_Text_SwordsDanceDesc::
	.string "{JPN}たたかいの おどりで\nこうげきを グーンと\nあげる$"

BattleFrontier_Lounge7_Text_DefenseCurlDesc::
	.string "{JPN}こぶしから てきのちからを\nすいとる ダメージの\nはんぶんの HPをかいふく$"

BattleFrontier_Lounge7_Text_SnoreDesc::
	.string "{JPN}くりかえし うつことで\nこぶしを かたくし\nじぶんの こうげきをあげる$"

BattleFrontier_Lounge7_Text_MudSlapDesc::
	.string "{JPN}からだの かたいぶぶんで\nたたいて 2かい\nれんぞくで こうげきする$"

BattleFrontier_Lounge7_Text_SwiftDesc::
	.string "{JPN}つばさを あいてに\nぶつけて 2かい\nれんぞくで こうげきする$"

BattleFrontier_Lounge7_Text_IcyWindDesc::
	.string "{JPN}てきへ だいちのちからを\nほうしゅつ てきの\nとくぼうをさげることがある$"

BattleFrontier_Lounge7_Text_EndureDesc::
	.string "{JPN}おおごえの しんどうで\nてきに ダメージを\nあたえる$"

BattleFrontier_Lounge7_Text_PsychUpDesc::
	.string "{JPN}2ー3ターンのあいだ\nあばれつづける あばれた\nあとは こんらんしてしまう$"

BattleFrontier_Lounge7_Text_IcePunchDesc::
	.string "{JPN}つめたい パンチで\nてきを こおらせる\nことが ある$"

BattleFrontier_Lounge7_Text_ThunderPunchDesc::
	.string "{JPN}でんげき パンチで\nてきを まひさせる\nことが ある$"

BattleFrontier_Lounge7_Text_FirePunchDesc::
	.string "{JPN}ほのおの パンチで\nてきを やけどさせる\nことが ある$"
