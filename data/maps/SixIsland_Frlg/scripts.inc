SixIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
	.byte 0

SixIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
	end

SixIsland_EventScript_Hiker::
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
	end

SixIsland_EventScript_Boy::
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
	end

SixIsland_EventScript_IslandSign::
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
	end

SixIsland_Text_IslandSign::
	.string "ここは 6のしま\nいにしえの ことづて たこうじま$"

SixIsland_Text_ThatWayToWaterPathRuinValley::
	.string "この さきを いくと\nみずのさんぽみちに でる!\pみちなりに ずっと あるけば\nそこが いせきのたにだ!$"

SixIsland_Text_SkyAtNightIsFantastic::
	.string "この くらいまで\nとかいから はなれると\lすごい ほしぞらが みられるんだ$"

