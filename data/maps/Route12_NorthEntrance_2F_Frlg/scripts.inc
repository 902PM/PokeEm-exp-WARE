Route12_NorthEntrance_2F_Frlg_MapScripts::
	.byte 0

Route12_NorthEntrance_2F_EventScript_LeftBinoculars::
	msgbox Route12_NorthEntrance_2F_Text_TheresManFishing, MSGBOX_SIGN
	end

Route12_NorthEntrance_2F_EventScript_RightBinoculars::
	msgbox Route12_NorthEntrance_2F_Text_ItsPokemonTower, MSGBOX_SIGN
	end

Route12_NorthEntrance_2F_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM27, Route12_NorthEntrance_2F_EventScript_ExplainTM27
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route12_NorthEntrance_2F_EventScript_TakeTMMale
	call_if_eq VAR_RESULT, FEMALE, Route12_NorthEntrance_2F_EventScript_TakeTMFemale
	checkitemspace ITEM_TM27
	goto_if_eq VAR_RESULT, FALSE, Route12_NorthEntrance_2F_EventScript_NoRoomForTM27
	giveitem_msg Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl, ITEM_TM27
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
	setflag FLAG_GOT_TM27
	release
	end

Route12_NorthEntrance_2F_EventScript_TakeTMMale::
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreBro
	return

Route12_NorthEntrance_2F_EventScript_TakeTMFemale::
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreSis
	return

Route12_NorthEntrance_2F_EventScript_NoRoomForTM27::
	msgbox Route12_NorthEntrance_2F_Text_DontHaveRoomForThis
	release
	end

Route12_NorthEntrance_2F_EventScript_ExplainTM27::
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
	release
	end

Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreBro::
	.string "わたしが かわいがってた ポケモン\nいまは ポケモン タワーで\lねむってるの……\p…… そうだ わたしの わざマシン\nおにいちゃんに あげるわ\lわたし…… もう いらない から$"

Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreSis::
	.string "わたしが かわいがってた ポケモン\nいまは ポケモン タワーで\lねむってるの……\p…… そうだ わたしの わざマシン\nおねえちゃんに あげるわ\lわたし…… もう いらない から$"

Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl::
	.string "{PLAYER}は おんなのこから\nわざマシン27を もらった!$"

Route12_NorthEntrance_2F_Text_ExplainTM27::
	.string "わざマシン27は\nおんがえし という わざなの……\pポケモンを たいせつに していれば\nしょうぶの ときに\lきっと こたえてくれるよ!$"

Route12_NorthEntrance_2F_Text_DontHaveRoomForThis::
	.string "にもつ いっぱいで もてないよ$"

Route12_NorthEntrance_2F_Text_TheresManFishing::
	.string "ぼうえんきょうを のぞいた!\pつりを してる おじさんだ!$"

Route12_NorthEntrance_2F_Text_ItsPokemonTower::
	.string "ぼうえんきょうを のぞいた!\pポケモン タワーが みえる!$"

