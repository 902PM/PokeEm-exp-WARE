CeladonCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
	.byte 0

CeladonCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
	end

CeladonCity_EventScript_LittleGirl::
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
	end

CeladonCity_EventScript_OldMan1::
	lock
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
	release
	end

CeladonCity_EventScript_Woman::
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
	end

CeladonCity_EventScript_OldMan2::
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
	end

CeladonCity_EventScript_SoftboiledTutor::
	goto EventScript_SoftboiledTutor
	end

CeladonCity_EventScript_FatMan::
	lock
	faceplayer
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
	closemessage
	applymovement LOCALID_CELADON_FAT_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeladonCity_EventScript_Poliwrath::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
	msgbox CeladonCity_Text_Poliwrath
	closemessage
	waitmoncry
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeladonCity_EventScript_RocketGrunt1::
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
	end

CeladonCity_EventScript_RocketGrunt2::
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
	end

CeladonCity_EventScript_Boy::
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
	end

CeladonCity_EventScript_SilphCoScientist::
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
	end

CeladonCity_EventScript_TrainerTips1::
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
	end

CeladonCity_EventScript_CitySign::
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
	end

CeladonCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_ERIKA, 0
	msgbox CeladonCity_Text_GymSign
	releaseall
	end

CeladonCity_EventScript_MansionSign::
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_DeptStoreSign::
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_TrainerTips2::
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
	end

CeladonCity_EventScript_PrizeExchangeSign::
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_GameCornerSign::
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
	end

CeladonCity_Text_GotMyKoffingInCinnabar::
	.string "わたしの ドガース!\nグレンじま で つかまえたの!\lおこると どくガス はくけど…\pふだんは いいこ なのよ$"

CeladonCity_Text_GymIsGreatFullOfWomen::
	.string "にひひ! この ジムは ええ!\nおんなのこ ばっかし じゃ!$"

CeladonCity_Text_GameCornerIsBadForCitysImage::
	.string "きれいな まちづくりが じまんの\nタマムシに ゲーム コーナーが\lできちゃって! こまった ものよ!$"

CeladonCity_Text_BlewItAllAtSlots::
	.string "トホホ…!\nスロットで また まけた!\pコインが たまったら\nけいひんに した ほうが ええと\lわかって おったのに…!$"

CeladonCity_Text_MyTrustedPalPoliwrath::
	.string "こいつ おれの あいかた!\nニョロボン!\pみずのいしを あてたら\nニョロゾ が しんか したよ$"

CeladonCity_Text_Poliwrath::
	.string "ニョロボン『ゲロゲーロ!$"

CeladonCity_Text_GetLostOrIllPunchYou::
	.string "なんだ ジロジロ みやがって!\nあっち いかねえと ぶんなぐるぞ!$"

CeladonCity_Text_KeepOutOfTeamRocketsWay::
	.string "めの まえを チョロチョロうるせえ!\nロケットだんを なめるなよ!$"

CeladonCity_Text_ExplainXAccuracyDireHit::
	.string "… おとくな けいじばん!\pヨクアタールは わざの\nめいちゅう りつ を あげる!\pクリティカットは わざが\nきゅうしょに あたり やすくなる\pアイテムの おかいもとめは\nタマムシ デパートで どうぞ!$"

CeladonCity_Text_CitySign::
	.string "ここは タマムシ シティ\nタマムシ にじいろ ゆめの いろ$"

CeladonCity_Text_GymSign::
	.string "タマムシ シティ ポケモン ジム\nリーダー エリカ\lしぜんを あいする おじょうさま!$"

CeladonCity_Text_MansionSign::
	.string "タマムシ マンション$"

CeladonCity_Text_DeptStoreSign::
	.string "ほしいもの きっと みつかる!\nタマムシ デパート$"

CeladonCity_Text_GuardSpecProtectsFromStatus::
	.string "… おとくな けいじばん!\pエフェクトガードは\nせんとうちゅうに つかうと\lみかたの ポケモンの のうりょくを\lさげられずに すみます!\pどうぐの おかいもとめは\nタマムシ デパートで どうぞ!$"

CeladonCity_Text_PrizeExchangeSign::
	.string "コインを ビッグな けいひんに!\n… けいひん こうかんじょ$"

CeladonCity_Text_GameCornerSign::
	.string "おとなの あそびば!\n… ロケット ゲーム コーナー$"

CeladonCity_Text_ScaldedTongueOnTea::
	.string "ひー いてて…\nべろ やけど しちゃった!\pマンションの ばーさんが\nくれた おちゃが\lあついの なんのって…\pさまさなきゃ のめないや\nふー ふー$"

Text_SoftboiledTeach::
	.string "やあ やあ!\pわたしは いつも きみが\nそこを とおるのを みてたが\lやっと あう ことが できた!\pこの こううんを きねんして\nとっときの わざ\lタマゴうみを おしえよう!$"

Text_SoftboiledDeclined::
	.string "わたしは いつでも\nみているから!\lまた あえると いいな!$"

Text_SoftboiledWhichMon::
	.string "タマゴうみを おぼえられる\nラッキーな ポケモンは?$"

Text_SoftboiledTaught::
	.string "きみの こううんを\nいのっている!$"

CeladonCity_Text_SomeoneStoleSilphScope::
	.string "おろおろ…\pシルフスコープを ぬすまれた!\nぬすんだ やつは かくじつに\lこの あたりに きたんだが…\pみうしなって しまった!\nどこに はいったんだ?$"

