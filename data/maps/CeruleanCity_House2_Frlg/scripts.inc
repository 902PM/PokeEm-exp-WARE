CeruleanCity_House2_Frlg_MapScripts::
	.byte 0

CeruleanCity_House2_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_House2_EventScript_HikerGotTM28
	msgbox CeruleanCity_House2_Text_RocketsStoleTMForDig
	release
	end

CeruleanCity_House2_EventScript_HikerGotTM28::
	msgbox CeruleanCity_House2_Text_TeachDiglettDigWithoutTM
	release
	end

CeruleanCity_House2_EventScript_Lass::
	msgbox CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood, MSGBOX_NPC
	end

CeruleanCity_House2_EventScript_WallHole::
	msgbox CeruleanCity_House2_Text_TeamRocketLeftWayOut, MSGBOX_SIGN
	end

CeruleanCity_House2_Text_RocketsStoleTMForDig::
	.string "くう…! ロケットだんめ!\pおれの いえを\nこんなに しちまいやがって!\pぬすまれた わざマシンは\nマンキーや サンドに\pじめんに あなを ほる わざを\nおしえる ものだ!\pあれは たかかったのに$"

CeruleanCity_House2_Text_TeachDiglettDigWithoutTM::
	.string "ぬすまれた ものは\nもどって こないと あきらめて\pうちの ディグダには\nきながに そだてながら\pあなほりを\nおしえる ことに したよ$"

CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood::
	.string "ロケットだん…!\nポケモンに あなを ほらせて\pきっと また\nわるだくみを かんがえてるのよ!$"

CeruleanCity_House2_Text_TeamRocketLeftWayOut::
	.string "かべに あなが あいてる!\nここから そとに でられるぞ!$"

