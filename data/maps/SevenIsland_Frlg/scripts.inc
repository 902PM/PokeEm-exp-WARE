SevenIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
	.byte 0

SevenIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
	end

SevenIsland_EventScript_IslandSign::
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
	end

SevenIsland_EventScript_OldWoman::
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
	end

SevenIsland_EventScript_Scientist::
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
	end

Text_SwordsDanceTeach::
	.string "あまり ひとが こない\nこの ばしょで しゅぎょう すると\lどんどん つよく なっていく\lそんな きが する!\pどんどん つよく なる…\pそう そんな わざ\nつるぎのまい… おぼえて みるか？$"

Text_SwordsDanceDeclined::
	.string "ふむ\nそれも いいだろう$"

Text_SwordsDanceWhichMon::
	.string "よし\nおしえる ポケモンを えらんでくれ$"

Text_SwordsDanceTaught::
	.string "われわれも\nどんどん つよく なりたいものだな$"

SevenIsland_Text_IslandSign::
	.string "ここは 7のしま\nおわりなく はてしなき もとめじま$"

SevenIsland_Text_IslandsMadeInSevenDays::
	.string "しまが 7つあるから\nナナシマと よばれている…\pと さいきんの わかいものは\nおもって おるが\p7にちで できた しまだという\nいいつたえ から\lこの なまえが ついたのじゃ$"

SevenIsland_Text_IslandVirtuallyUntouched::
	.string "この しまは\nほぼ しぜんの かたちを\lのこして あります\pだから すこし\nあるきにくい かも しれませんね$"

