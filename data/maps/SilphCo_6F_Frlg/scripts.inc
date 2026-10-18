SilphCo_6F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_OnLoad
	.byte 0

SilphCo_6F_OnLoad::
	call_if_unset FLAG_SILPH_6F_DOOR, EventScript_Close6FDoor
	end

SilphCo_6F_EventScript_WorkerM2::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM2RocketsGone
	msgbox SilphCo_6F_Text_TargetedSilphForOurMonProducts
	release
	end

SilphCo_6F_EventScript_WorkerM2RocketsGone::
	msgbox SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder
	release
	end

SilphCo_6F_EventScript_WorkerM3::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM3RocketsGone
	msgbox SilphCo_6F_Text_RocketsTookOverBuilding
	release
	end

SilphCo_6F_EventScript_WorkerM3RocketsGone::
	msgbox SilphCo_6F_Text_BetterGetBackToWork
	release
	end

SilphCo_6F_EventScript_WorkerM1::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM1RocketsGone
	msgbox SilphCo_6F_Text_HelpMePlease
	release
	end

SilphCo_6F_EventScript_WorkerM1RocketsGone::
	msgbox SilphCo_6F_Text_WeGotEngaged
	release
	end

SilphCo_6F_EventScript_WorkerF1::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF1RocketsGone
	msgbox SilphCo_6F_Text_ThatManIsSuchACoward
	release
	end

SilphCo_6F_EventScript_WorkerF1RocketsGone::
	msgbox SilphCo_6F_Text_NeedsMeToLookAfterHim
	release
	end

SilphCo_6F_EventScript_WorkerF2::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF2RocketsGone
	msgbox SilphCo_6F_Text_RocketsTryingToConquerWorld
	release
	end

SilphCo_6F_EventScript_WorkerF2RocketsGone::
	msgbox SilphCo_6F_Text_RocketsRanAwayBecauseOfYou
	release
	end

SilphCo_6F_EventScript_FloorSign::
	msgbox SilphCo_6F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_6F_EventScript_Taylor::
	trainerbattle_single TRAINER_SCIENTIST_TAYLOR, SilphCo_6F_Text_TaylorIntro, SilphCo_6F_Text_TaylorDefeat
	msgbox SilphCo_6F_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_30, SilphCo_6F_Text_Grunt1Intro, SilphCo_6F_Text_Grunt1Defeat
	msgbox SilphCo_6F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_31, SilphCo_6F_Text_Grunt2Intro, SilphCo_6F_Text_Grunt2Defeat
	msgbox SilphCo_6F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_Text_RocketsTookOverBuilding::
	.string "やつらが いきなり やってきて\nビルを のっとったんです$"

SilphCo_6F_Text_BetterGetBackToWork::
	.string "… さてと!\nしごと しなきゃ しごと!$"

SilphCo_6F_Text_HelpMePlease::
	.string "ぶるぶる…\nかみさま ほとけさま たすけて$"

SilphCo_6F_Text_WeGotEngaged::
	.string "ぼくたち こんやく したよ\n… てれるなあ$"

SilphCo_6F_Text_ThatManIsSuchACoward::
	.string "となりの ひと…\nおとこ なのに なさけないわ$"

SilphCo_6F_Text_NeedsMeToLookAfterHim::
	.string "このひとは\nあたしが ついてなきゃ\lだめだって おもったの$"

SilphCo_6F_Text_RocketsTryingToConquerWorld::
	.string "ロケットだんは\nポケモン つかって\lせかい せいふく したいのよ$"

SilphCo_6F_Text_RocketsRanAwayBecauseOfYou::
	.string "ロケットだんが にげたのは\nあなたの おかげね$"

SilphCo_6F_Text_TargetedSilphForOurMonProducts::
	.string "シルフ カンパニーは グッズを\nいっぱい つくってる から\lねらわれたんだろうな$"

SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder::
	.string "おおきく なったら\nシルフで はたらくと いいよ$"

SilphCo_6F_Text_Grunt1Intro::
	.string "おれこそは\nロケット 4きょうだいの ひとり!$"

SilphCo_6F_Text_Grunt1Defeat::
	.string "まけたよ$"

SilphCo_6F_Text_Grunt1PostBattle::
	.string "まあ いい\nおとうとが かたきを とって くれる$"

SilphCo_6F_Text_TaylorIntro::
	.string "しゃちょうめー!\pおれさまを\nポナヤツングスカ してん\lなんかに とばし やがるから\lロケットだんに ねらわれるのだ!$"

SilphCo_6F_Text_TaylorDefeat::
	.string "がっくしよ$"

SilphCo_6F_Text_TaylorPostBattle::
	.string "ポナヤツングスカ してん?\nああ…\lロシアの おくの ほうだよ$"

SilphCo_6F_Text_Grunt2Intro::
	.string "ロケットだんを うらぎって\nただで すむと おもうな!$"

SilphCo_6F_Text_Grunt2Defeat::
	.string "うらぎりもの め$"

SilphCo_6F_Text_Grunt2PostBattle::
	.string "うらぎり じゃない?\nせいぎの みかた なら\lきみは おれらの うらぎりものだ$"

SilphCo_6F_Text_FloorSign::
	.string "シルフ カンパニー ほんしゃ\n6かい$"

