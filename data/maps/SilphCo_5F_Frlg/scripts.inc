SilphCo_5F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
	.byte 0

SilphCo_5F_OnLoad::
	call_if_unset FLAG_SILPH_5F_DOOR_1, EventScript_Close5FDoor1
	call_if_unset FLAG_SILPH_5F_DOOR_2, EventScript_Close5FDoor2
	call_if_unset FLAG_SILPH_5F_DOOR_3, EventScript_Close5FDoor3
	end

SilphCo_5F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_5F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_5F_Text_RocketsInUproarAboutIntruder
	release
	end

SilphCo_5F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_5F_Text_YoureOurHeroThankYou
	release
	end

SilphCo_5F_EventScript_PokemonReport1::
	msgbox SilphCo_5F_Text_PorygonFirstVRMon, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_PokemonReport2::
	msgbox SilphCo_5F_Text_Over350TechniquesConfirmed, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_PokemonReport3::
	msgbox SilphCo_5F_Text_SomeMonsEvolveWhenTraded, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_FloorSign::
	msgbox SilphCo_5F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_Beau::
	trainerbattle_single TRAINER_SCIENTIST_BEAU, SilphCo_5F_Text_BeauIntro, SilphCo_5F_Text_BeauDefeat
	msgbox SilphCo_5F_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_28, SilphCo_5F_Text_Grunt1Intro, SilphCo_5F_Text_Grunt1Defeat
	msgbox SilphCo_5F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_29, SilphCo_5F_Text_Grunt2Intro, SilphCo_5F_Text_Grunt2Defeat
	msgbox SilphCo_5F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Dalton::
	trainerbattle_single TRAINER_JUGGLER_DALTON, SilphCo_5F_Text_DaltonIntro, SilphCo_5F_Text_DaltonDefeat
	msgbox SilphCo_5F_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_Text_RocketsInUproarAboutIntruder::
	.string "だれか ビルに しのび こんだと\nロケットだんが さわいでる\l… きみの こと らしいね$"

SilphCo_5F_Text_YoureOurHeroThankYou::
	.string "ロケットだんは にげたよ!\nきみが おっぱらったのかい\l… ありがとう!$"

SilphCo_5F_Text_Grunt1Intro::
	.string "こどもが うろついてると\nさっき れんらくが あったぜ!$"

SilphCo_5F_Text_Grunt1Defeat::
	.string "ばったり…$"

SilphCo_5F_Text_Grunt1PostBattle::
	.string "ロケットだんに\nたてつかない ほうが\lみのため だぜ$"

SilphCo_5F_Text_BeauIntro::
	.string "この フロアは\nモンスターボールの\lけんきゅう セクションだ!$"

SilphCo_5F_Text_BeauDefeat::
	.string "ちくしょう!$"

SilphCo_5F_Text_BeauPostBattle::
	.string "ここでは…\nでんせつの ポケモンさえ とれる\lきゅうきょくの モンスターボールを\lけんきゅう してたのだ$"

SilphCo_5F_Text_DaltonIntro::
	.string "おかしいな?\nこどもが はいって これる\lわけが ないんだが$"

SilphCo_5F_Text_DaltonDefeat::
	.string "こりゃ いかん$"

SilphCo_5F_Text_DaltonPostBattle::
	.string "ここは 5かい…\nボスの いる ところ まで\lまだまだ あるぜ!$"

SilphCo_5F_Text_Grunt2Intro::
	.string "ロケットだん あいてに\nなめた まねして くれるぜ$"

SilphCo_5F_Text_Grunt2Defeat::
	.string "ふん たまたまだ!$"

SilphCo_5F_Text_Grunt2PostBattle::
	.string "たまたま… おもいだした!\pタマタマは\nナッシーに しんか するぞ$"

SilphCo_5F_Text_PorygonFirstVRMon::
	.string "… ポケモン レポートだ!\pポケモン けんきゅうじょ では\nじんこうの ポケモン\lポリゴンを つくる ことに\lせいこう した… …$"

SilphCo_5F_Text_Over350TechniquesConfirmed::
	.string "… ポケモン レポートだ!\pポケモンが つかう わざは\nげんざい わかって いるだけで\l350しゅるい いじょうある$"

SilphCo_5F_Text_SomeMonsEvolveWhenTraded::
	.string "… ポケモン レポートだ!\pつうしん こうかん すると\nしんかする ポケモンが\lいることが かくにん された$"

SilphCo_5F_Text_FloorSign::
	.string "シルフ カンパニー ほんしゃ\n5かい$"

SilphCo_5F_Text_RocketBossLookingForStrongMons::
	.string "この ビルに のりこんできた\nやつらの ボスは\lめずらしい つよい ポケモンを\lもとめて いるって いってた\pしゃちょうに ひがいが\nなければ いいのだが…$"

