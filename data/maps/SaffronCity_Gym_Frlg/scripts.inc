SaffronCity_Gym_Frlg_MapScripts::
	.byte 0

SaffronCity_Gym_EventScript_Sabrina::
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_GiveTM04
	msgbox SaffronCity_Gym_Text_ExplainTM04
	release
	end

SaffronCity_Gym_EventScript_DefeatedSabrina::
	famechecker FAMECHECKER_SABRINA, 2
	famechecker FAMECHECKER_SABRINA, 3
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
	setflag FLAG_DEFEATED_SABRINA
	setflag FLAG_BADGE06_GET
	set_gym_trainers_frlg 6
	goto SaffronCity_Gym_EventScript_GiveTM04
	end

SaffronCity_Gym_EventScript_GiveTM04::
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
	checkitemspace ITEM_TM04
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_EventScript_NoRoomForTM04
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
	setflag FLAG_GOT_TM04_FROM_SABRINA
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
	release
	end

SaffronCity_Gym_EventScript_NoRoomForTM04::
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
	release
	end

SaffronCity_Gym_EventScript_Johan::
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Tyron::
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
	famechecker FAMECHECKER_SABRINA, 5
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Cameron::
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Amanda::
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Stacy::
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_Tasha::
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuyPostVictory
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
	release
	end

SaffronCity_Gym_EventScript_GymGuyPostVictory::
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
	release
	end

SaffronCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
	msgbox SaffronCity_Gym_Text_GymStatue
	releaseall
	end

SaffronCity_Gym_EventScript_GymStatuePostVictory::
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

SaffronCity_Gym_Text_SabrinaIntro::
	.string "… やっぱり きたわ!\nよかんが したのよ!\pなにげに スプーンを なげたら\nまがって いらい… わたし\lエスパー しょうじょ なの\pたたかうの すき じゃない けど\nあなたが のぞむ なら\lわたしの ちから\lみせて あげる!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

SaffronCity_Gym_Text_SabrinaDefeat::
	.string "まける なんて…!\nとても ショック!\lでも まけは まけ…!\pわたしの しょうぶの あまさを\nいさぎよく みとめるわ!\pかった あかしに\nゴールド バッジを\lあなたに さしあげ ましょう$"

SaffronCity_Gym_Text_SabrinaPostBattle::
	.string "ちょうのうりょくは かぎられた\nひとの ちから では ないわ!\lだれでも もってるのよ!\lただ それに きが つかない だけ$"

SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis::
	.string "ゴールド バッジで\nレベル70 までの ポケモンが\lいうことを ききます!\pそれ いじょう\nつよい ポケモンは\lソッポ むいたり ふてね したり\lあつかいが たいへん です!\pだけど そだて すぎなきゃ\nそういう しんぱいは むようよ!\pそれから…!\nわざマシンを もって いって$"

SaffronCity_Gym_Text_ReceivedTM04FromSabrina::
	.string "{PLAYER}は ナツメから\nわざマシン04を もらった!$"

SaffronCity_Gym_Text_ExplainTM04::
	.string "わざマシン04は めいそう!\nせいしんを しゅうちゅう させて\lとくこう とくぼうを あげるわ!$"

SaffronCity_Gym_Text_BagFullOfOtherItems::
	.string "あ にもつが いっぱいよ$"

SaffronCity_Gym_Text_AmandaIntro::
	.string "ナツメは… わたし より\nだいぶ としした だが!\lかのじょを そんけい している!$"

SaffronCity_Gym_Text_AmandaDefeat::
	.string "およばなかったか!$"

SaffronCity_Gym_Text_AmandaPostBattle::
	.string "しょうぶが ごかくの ときは\nきもちが つよい ほうが かつ!\pナツメに かちたい なら\nきみも かちたいッ! と\lつよく ねんじた ほうが いい$"

SaffronCity_Gym_Text_JohanIntro::
	.string "みえない ちからを つかう\nエスパーを こわいと おもうか!$"

SaffronCity_Gym_Text_JohanDefeat::
	.string "こういう ことも\nあるのか…$"

SaffronCity_Gym_Text_JohanPostBattle::
	.string "エスパーに ゆうりな もの?\n… はははーッ!\lゆうれい や むし くらい だぜ!$"

SaffronCity_Gym_Text_StacyIntro::
	.string "ポケモンは\nかいぬしに にるって しってるか?\pという ことは…\nおまえの ポケモンは つよいかな?$"

SaffronCity_Gym_Text_StacyDefeat::
	.string "わかった!$"

SaffronCity_Gym_Text_StacyPostBattle::
	.string "わたしも まだ まだ だ…\nサイコキネシスを マスター して\lポケモンに おしえ なくては!$"

SaffronCity_Gym_Text_TyronIntro::
	.string "きみは わかってる だろ?\nポケモンは パワー だけ\lあったって かてない ことを!$"

SaffronCity_Gym_Text_TyronDefeat::
	.string "… おれが\nまける なんて ばかな!$"

SaffronCity_Gym_Text_TyronPostBattle::
	.string "となりの カラテ だいおう だって\nうちの ナツメさんに\lコテンパンに やられたんだぜ$"

SaffronCity_Gym_Text_TashaIntro::
	.string "きみは わたしと\nポケモンを たたかわせる…!$"

SaffronCity_Gym_Text_TashaDefeat::
	.string "くっ…!\nやはり わたしが やぶれたか$"

SaffronCity_Gym_Text_TashaPostBattle::
	.string "こういう けっかは わかってた…\n… そう!\lこれが よち のうりょく だ$"

SaffronCity_Gym_Text_CameronIntro::
	.string "ナツメさんは わかく して\nこの ポケモン ジムを しきる\lじつりょくしゃ!\pかんたん には あわせ ないぜ!$"

SaffronCity_Gym_Text_CameronDefeat::
	.string "まけて しまった!$"

SaffronCity_Gym_Text_CameronPostBattle::
	.string "おしえて やろう…\nかつて ヤマブキ には\lふたつの ポケモン ジムが あった\pとういつ しあいに まけた のが\nとなりの かくとう どうじょうだ!$"

SaffronCity_Gym_Text_PrestonIntro::
	.string "ヤマブキ ジム!\lまたの なを\lエスパー ようせい じょ\lおまえ…\p… ナツメに あおうと してるな?\nそうだろ!\lわかってるんだ!$"

SaffronCity_Gym_Text_PrestonDefeat::
	.string "ぐわああ…!$"

SaffronCity_Gym_Text_PrestonPostBattle::
	.string "… そうだ!\nひとの こころを よむ\lのうりょくを テレパス という!$"

SaffronCity_Gym_Text_GymGuyAdvice::
	.string "おーす!\nみらいの チャンピオン!\pナツメの ポケモンは\nちょうのうりょくを つかって\lおまえの ポケモンを まどわすぜ!\pとくに…! かくとう ポケモンは\nあいしょうが わるい!\pパワーを はっきする まえに\nエジキに なっちまう からな!$"

SaffronCity_Gym_Text_GymGuyPostVictory::
	.string "ちょうのうりょく… か!\pおれに そんな ものが あったら\nスロットで あてほうだい だぜ!$"

SaffronCity_Gym_Text_GymStatue::
	.string "ヤマブキ ポケモン ジム\nナツメ にんてい トレーナー!\l{RIVAL}$"

SaffronCity_Gym_Text_GymStatuePlayerWon::
	.string "ヤマブキ ポケモン ジム\nナツメ にんてい トレーナー!\l{RIVAL} {PLAYER}$"

