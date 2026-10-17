FiveIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
	.byte 0

FiveIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND
	end

FiveIsland_EventScript_IslandSign::
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
	end

FiveIsland_EventScript_BugCatcher::
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
	end

FiveIsland_EventScript_Fisher::
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
	end

FiveIsland_Text_IslandSign::
	.string "ここは 5のしま\nかんきゅうの ながれ ときのしま$"

FiveIsland_Text_WeirdBuildingInMeadow::
	.string "あーあ!\nあきちで あそぼうと おもったのに\lへんな たてものが できて\lあそべなく なっちゃった$"

FiveIsland_Text_BeenGettingBusierAroundHere::
	.string "さいきんじゃ このへんも\nさわがしく なって\lあんまり いいのが つれないねえ$"

