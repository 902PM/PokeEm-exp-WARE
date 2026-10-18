SSAnne_Kitchen_Frlg_MapScripts::
	.byte 0

SSAnne_Kitchen_EventScript_Chef1::
	msgbox SSAnne_Kitchen_Text_BusyOutOfTheWay, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef2::
	msgbox SSAnne_Kitchen_Text_SawOddBerryInTrash, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef3::
	msgbox SSAnne_Kitchen_Text_SoBusyImDizzy, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef4::
	lock
	faceplayer
	msgbox SSAnne_Kitchen_Text_IAmLeChefMainCourseIs
	random 3
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, SSAnne_Kitchen_EventScript_SalmonDuSalad
	call_if_eq VAR_0x8008, 1, SSAnne_Kitchen_EventScript_EelsAuBarbecue
	call_if_eq VAR_0x8008, 2, SSAnne_Kitchen_EventScript_PrimeBeefsteak
	release
	end

SSAnne_Kitchen_EventScript_SalmonDuSalad::
	msgbox SSAnne_Kitchen_Text_SalmonDuSalad
	return

SSAnne_Kitchen_EventScript_EelsAuBarbecue::
	msgbox SSAnne_Kitchen_Text_EelsAuBarbecue
	return

SSAnne_Kitchen_EventScript_PrimeBeefsteak::
	msgbox SSAnne_Kitchen_Text_PrimeBeefsteak
	return

SSAnne_Kitchen_EventScript_Chef5::
	msgbox SSAnne_Kitchen_Text_PeelSpudsEveryDay, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef6::
	msgbox SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef7::
	msgbox SSAnne_Kitchen_Text_OnlyGetToPeelOnions, MSGBOX_NPC
	end

SSAnne_Kitchen_Text_BusyOutOfTheWay::
	.string "ほら!\nそこの きみ じゃまだよ!\lどいた どいた!$"

SSAnne_Kitchen_Text_SawOddBerryInTrash::
	.string "ゴミばこに へんな きのみが\nすてて あったけど なんだろう?$"

SSAnne_Kitchen_Text_SoBusyImDizzy::
	.string "いそがしくって めが まわる!\nたのむ から あっち いってくれ!$"

SSAnne_Kitchen_Text_PeelSpudsEveryDay::
	.string "せっせ せっせ…\pおれは まいにち\nイモの かわむきだ!\lせっせ せっせ…$"

SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton::
	.string "そういえば くいしんぼうの\nカビゴン しってる?\pあんなに よく たべて よく ねる\nポケモンは ほかに いないよ!$"

SSAnne_Kitchen_Text_OnlyGetToPeelOnions::
	.string "しくしく しくしく…\pおれは まいにち\nタマネギの かわむきだー\lしくしく しくしく…$"

SSAnne_Kitchen_Text_IAmLeChefMainCourseIs::
	.string "おっほん!\nわたしが ここの シェフです!\pきょうの メイン ディッシュは$"

SSAnne_Kitchen_Text_SalmonDuSalad::
	.string "したびらめの ムニエル!\pしかし おきゃくさんに\nまた さかな? と いわれそうだ$"

SSAnne_Kitchen_Text_EelsAuBarbecue::
	.string "さんまの しおやき!\p…じゃ おきゃく さんに\nおこられるか?$"

SSAnne_Kitchen_Text_PrimeBeefsteak::
	.string "ぎゅう フィレの ステーキ!\pでも ざいりょう\nにんずう ぶん あったかな?$"

