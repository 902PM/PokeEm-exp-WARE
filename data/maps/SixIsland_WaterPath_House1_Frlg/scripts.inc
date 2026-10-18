SixIsland_WaterPath_House1_Frlg_MapScripts::
	.byte 0

SixIsland_WaterPath_House1_EventScript_Beauty::
	lock
	faceplayer
	setvar VAR_0x8004, SPECIES_HERACROSS
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty
	special GetHeracrossSizeRecordInfo
	msgbox SixIsland_WaterPath_House1_Text_MayIMeasureHeracross
	special ChoosePartyMon
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_ge VAR_RESULT, PARTY_SIZE, SixIsland_WaterPath_House1_EventScript_DontShowMon
	special CompareHeracrossSize
	goto_if_eq VAR_RESULT, 1, SixIsland_WaterPath_House1_EventScript_ShownNonHeracross
	goto_if_eq VAR_RESULT, 2, SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross
	goto_if_eq VAR_RESULT, 3, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	goto_if_eq VAR_RESULT, 4, SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross
	release
	end

SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty::
	msgbox SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross
	release
	end

SixIsland_WaterPath_House1_EventScript_DontShowMon::
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownNonHeracross::
	msgbox SixIsland_WaterPath_House1_Text_ThisWontDo
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross::
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	msgbox SixIsland_WaterPath_House1_Text_ItsXSizeYSizeWasBiggest
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross::
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	msgbox SixIsland_WaterPath_House1_Text_ItsXSizeSameAsBefore
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownBigHeracross::
	setflag FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
	msgbox SixIsland_WaterPath_House1_Text_ItsXSizeDeserveReward
	giveitem ITEM_NEST_BALL
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall
	msgbox SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne
	release
	end

SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall::
	msgbox SixIsland_WaterPath_House1_Text_YourBagIsFull
	release
	end

SixIsland_WaterPath_House1_EventScript_SizeRecord::
	lockall
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty
	msgbox SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort
	releaseall
	end

SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty::
	special GetHeracrossSizeRecordInfo
	msgbox SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXSize
	releaseall
	end

SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross::
	.string "へら へら ヘラクロスー\nおおしい むしポケ ヘラクロスー\lすき すき でっかい ヘラクロスー$"

SixIsland_WaterPath_House1_Text_MayIMeasureHeracross::
	.string "きゃー!\nそれは ヘラクロスねっ!\pねえねえ おおきさ はからせて!$"

SixIsland_WaterPath_House1_Text_ItsXSizeDeserveReward::
	.string "やーん {STR_VAR_2}cmよ\nこんなの はじめてよー!\lもう これ あげちゃう!$"

SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne::
	.string "もっと もっと\nおおきい ヘラクロスが みたいわー\pすき すき でっかい ヘラクロスー$"

SixIsland_WaterPath_House1_Text_ItsXSizeSameAsBefore::
	.string "あれ? {STR_VAR_2}cmって…\nやだ このまえと おなじよー$"

SixIsland_WaterPath_House1_Text_ItsXSizeYSizeWasBiggest::
	.string "あん {STR_VAR_2}cmよ\nまえの {STR_VAR_3}cmの\lヘラクロスの ほうが おおきいわ$"

SixIsland_WaterPath_House1_Text_ThisWontDo::
	.string "あーん ちがーう!\nヘラクロスは もっと\lつよそうで かっこよくて\lツノが すてきな ポケモンなの!$"

SixIsland_WaterPath_House1_Text_YourBagIsFull::
	.string "にもつが いっぱいで\nはいらないわよ$"

SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXSize::
	.string "わたしが いままでに みた\nすっごく おおきい ヘラクロス…\p{STR_VAR_3}cm$"

SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort::
	.string "はりがみだ!\pなにかの きろくを\nかきこめる ように なっている$"

