SilphCo_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
	.byte 0

SilphCo_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
	end

SilphCo_1F_EventScript_Receptionist::
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
	end

SilphCo_1F_EventScript_FloorSign::
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_1F_Text_WelcomePresidentInBoardroom::
	.string "いらっしゃいませ!\pしゃちょう でしたら ただいま\n11かい やくいんしつで ございます$"

SilphCo_1F_Text_Unused::
	.string "めちゃめちゃに こわされてる\nとうぶん なおりそうに ない…$"

SilphCo_1F_Text_FloorSign::
	.string "シルフ カンパニー ほんしゃ\n1かい$"

