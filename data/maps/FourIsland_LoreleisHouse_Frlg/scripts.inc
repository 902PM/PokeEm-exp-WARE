FourIsland_LoreleisHouse_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_LoreleisHouse_OnTransition
	.byte 0

FourIsland_LoreleisHouse_OnTransition::
	special UpdateLoreleiDollCollection
	end

FourIsland_LoreleisHouse_EventScript_Lorelei::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei3
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei2
	msgbox FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland
	release
	end

FourIsland_LoreleisHouse_EventScript_Lorelei2::
	setflag FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
	msgbox FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile
	release
	end

FourIsland_LoreleisHouse_EventScript_Lorelei3::
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
	release
	end

FourIsland_LoreleisHouse_EventScript_Doll::
	lock
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
	release
	end

FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland::
	.string "カンナ『いま\nなやんで いるの\pじぶんが そだった しまで\nなにか あっても\lポケモンリーグに いては\lきづく ことが できない\pそれは むせきにんな\nことでは ないかって……$"

FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile::
	.string "カンナ『あなたが すべて\nかいけつ したのね…?\pそう よね\nわたしが どうしても\lここに いなくては ならない\lという わけでは\lなかったの よね\pありがとう…\nもう しばらく したら\lポケモンリーグに かえります$"

FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow::
	.string "この さき\nどうなるかは わからない けど…\pいまはただ わたし だけに\nできることを するわ$"

FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore::
	.string "ポケモン ぬいぐるみが ある!$"

