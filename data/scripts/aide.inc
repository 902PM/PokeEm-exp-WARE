Aide_EventScript_HaventCaughtEnough::
	msgbox Aide_Text_HaventCaughtEnoughMonsForItem
	release
	end

Aide_EventScript_NoRoomForItem::
	msgbox Aide_Text_DontHaveAnyRoomForItem
	release
	end

Aide_EventScript_DeclineCheckMons::
	msgbox Aide_Text_GetEnoughMonsComeBackForItem
	release
	end

Aide_Text_HaventCaughtEnoughMonsForItem::
	.string "… … えーと!\nつかまえた ポケモンは……\lあれれー?\lまだ {STR_VAR_3}しゅるい ですよ!\p{STR_VAR_1}しゅるいに たりない なら\n{STR_VAR_2}は\lまた こんど ですね$"

Aide_Text_GetEnoughMonsComeBackForItem::
	.string "…… …… そう ですか\p{STR_VAR_1}しゅるいに たりない なら\n{STR_VAR_2}は\lまた こんど ですね$"

Aide_Text_DontHaveAnyRoomForItem::
	.string "… … と おもった けど\nにもつが いっぱい だから\l{STR_VAR_2}は\lまた こんど ですね$"
