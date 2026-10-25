ScorchedSlab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, ScorchedSlab_OnLoad
	.byte 0

ScorchedSlab_OnTransition:
	setflag FLAG_LANDMARK_SCORCHED_SLAB
	end

ScorchedSlab_OnLoad:
	call_if_set FLAG_SYS_GAME_CLEAR, ScorchedSlab_EventScript_OpenStairs
	end

ScorchedSlab_EventScript_OpenStairs::
	setmetatile 9, 5, METATILE_Cave_Stairs, FALSE
	return
