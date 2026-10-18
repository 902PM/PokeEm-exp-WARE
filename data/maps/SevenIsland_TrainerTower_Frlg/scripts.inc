SevenIsland_TrainerTower_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TrainerTower_OnTransition
	.byte 0

SevenIsland_TrainerTower_OnTransition::
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
	end

SevenIsland_TrainerTower_EventScript_TrainerTowerSign::
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerSign, MSGBOX_SIGN
	end

SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign::
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerAhead, MSGBOX_SIGN
	end

SevenIsland_TrainerTower_Text_DarioIntro::
	.string "きみの けはいが\nちかづくのを かんじて いたよ!$"

SevenIsland_TrainerTower_Text_DarioDefeat::
	.string "ギブアップ$"

SevenIsland_TrainerTower_Text_DarioPostBattle::
	.string "このさき きみは\nたくさんの ひとと\lふしぎな ちからで\lつながって いく きがする$"

SevenIsland_TrainerTower_Text_RodetteIntro::
	.string "この しまの どこかに\nふしぎな ポケモンたちが\lねむっている…$"

SevenIsland_TrainerTower_Text_RodetteDefeat::
	.string "すごい ひと…!$"

SevenIsland_TrainerTower_Text_RodettePostBattle::
	.string "この しまの どこかに\nねむっている\lふしぎな ポケモンたちが\lまっている のは… あなた?$"

SevenIsland_TrainerTower_Text_TrainerTowerSign::
	.string "トレーナータワー いりぐち\nつよき トレーナーよ かけあがれ!$"

SevenIsland_TrainerTower_Text_TrainerTowerAhead::
	.string "このさき トレーナータワー$"

@ Unused
SevenIsland_TrainerTower_Text_TrainerTowerClosed::
	.string "トレーナータワーには\nいまは はいれない みたい…$"

@ Unused
SevenIsland_TrainerTower_Text_TrainerTowerOpend::
	.string "トレーナータワーが あいてる!\nさっそく はいってみよう!$"

