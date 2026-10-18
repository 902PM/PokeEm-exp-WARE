CinnabarIsland_PokemonLab_ResearchRoom_Frlg_MapScripts::
	.byte 0

CinnabarIsland_PokemonLab_ResearchRoom_EventScript_MetronomeTutor::
	goto EventScript_MetronomeTutor
	end

CinnabarIsland_PokemonLab_ResearchRoom_EventScript_Scientist::
	msgbox CinnabarIsland_PokemonLab_ResearchRoom_Text_EeveeCanEvolveIntroThreeMons, MSGBOX_NPC
	end

CinnabarIsland_PokemonLab_ResearchRoom_EventScript_Computer::
	msgbox CinnabarIsland_PokemonLab_ResearchRoom_Text_LegendaryBirdEmail, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_ResearchRoom_EventScript_AmberPipe::
	msgbox CinnabarIsland_PokemonLab_ResearchRoom_Text_AnAmberPipe, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_ResearchRoom_Text_EeveeCanEvolveIntroThreeMons::
	.string "そう! イーブイは\n3しゅるいの ポケモンに\lしんか する かのうせいが ある!$"

CinnabarIsland_PokemonLab_ResearchRoom_Text_LegendaryBirdEmail::
	.string "パソコンに\nでんしメールが とどいてる!\p… … …\pでんせつの とりポケモンは\n3しゅるい… ファイヤー\lサンダー フリーザー…\lしかし どこに いるのか\lまだ わかって ません\pこんど ハナダ どうくつに\nちょうさに いきます\l… まずは ほうこく まで\lポケモン ちょうさ たい\p… … …$"

CinnabarIsland_PokemonLab_ResearchRoom_Text_AnAmberPipe::
	.string "コハクの パイプが ある!$"

