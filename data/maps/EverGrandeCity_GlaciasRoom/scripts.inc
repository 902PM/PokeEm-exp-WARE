EverGrandeCity_GlaciasRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
	.byte 0

EverGrandeCity_GlaciasRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

EverGrandeCity_GlaciasRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 3
	releaseall
	end

EverGrandeCity_GlaciasRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
	end

EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_GlaciasRoom_EventScript_Glacia::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	goto_if_set FLAG_SYS_GAME_CLEAR,EverGrandeCity_GlaciasRoom_EventScript_Battle_Rematch
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end

EverGrandeCity_GlaciasRoom_EventScript_Battle_Rematch::
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech_Rematch, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA_1, EverGrandeCity_GlaciasRoom_Text_Defeat_Rematch
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated_Rematch
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
	goto_if_set FLAG_SYS_GAME_CLEAR,EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech_Rematch
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech_Rematch::
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech_Rematch, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_Defeated_Rematch::
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech_Rematch, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
	.string "{JPN}ようこそ\nしてんのうの プリムと いいます\pこおりの わざを きわめたくて\nはるか ホウエンまで やって きました\pですが ここに ちょうせんに くるのは\nやわな トレーナーと ポケモンばかり……\pあなたは どう?\pほんきを だしても だいじょうぶ だと\nうれしいの ですが……!!$"

EverGrandeCity_GlaciasRoom_Text_Defeat:
	.string "{JPN}あなたと ポケモンの\nたましいの あつさ!\pそれは なによりも あつく\nわたくしの こおりの わざが\lつうじる ものでは なかったのですね$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
	.string "{JPN}つぎに すすみなさい\pそこで ポケモン リーグの\nほんとうの おそろしさ たしかめなさい$"

EverGrandeCity_GlaciasRoom_Text_IntroSpeech_Rematch:
	.string "{JPN}おまちして おりました\pあつい たましいを もつ\nトレーナー すべてを いてつかせる\lわたくしの ポケモン……\pあなたがたは どう たちむかいます?$"

EverGrandeCity_GlaciasRoom_Text_Defeat_Rematch:
	.string "{JPN}ほんとうに あつい……$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech_Rematch:
	.string "{JPN}ウフフ……\pわたくしの こころまで とかすつもり?\pまあ それも かまいません けれど\pともかく つぎに すすみなさい\nゲンジも あなたを まっています$"
