MagmaHideout_2F_1R_MapScripts::
	.byte 0

MagmaHideout_2F_1R_EventScript_Grunt14::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Intro, MagmaHideout_2F_1R_Text_Grunt14Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Intro, MagmaHideout_2F_1R_Text_Grunt3Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Intro, MagmaHideout_2F_1R_Text_Grunt4Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Intro, MagmaHideout_2F_1R_Text_Grunt5Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_Text_Grunt14Intro:
	.string "{JPN}むむむ!\pここに はいって これるのは\nマグマだんの メンバー だけのはず!\pなのに あなたは\nマグマだんの ふくを きていない……\pえーい あやしい やつめ!\nわたしと しょうぶ しなさい!$"

MagmaHideout_2F_1R_Text_Grunt14Defeat:
	.string "{JPN}あわわわ……\nマグマだんの プライドが……$"

MagmaHideout_2F_1R_Text_Grunt14PostBattle:
	.string "{JPN}さむがりの ひとは\nマグマだんに はいると いいわよ$"

MagmaHideout_2F_1R_Text_Grunt3Intro:
	.string "{JPN}こらこら!\pオレの めのまえを だまって\nすどおり させる わけには いかねーぞ!$"

MagmaHideout_2F_1R_Text_Grunt3Defeat:
	.string "{JPN}うはっ! まけましたっ!$"

MagmaHideout_2F_1R_Text_Grunt3PostBattle:
	.string "{JPN}こんなことなら すどおり していって\nもらうほうが よかったかも……$"

MagmaHideout_2F_1R_Text_Grunt4Intro:
	.string "{JPN}やや! あやしい やつめ!$"

MagmaHideout_2F_1R_Text_Grunt4Defeat:
	.string "{JPN}ぬおお……$"

MagmaHideout_2F_1R_Text_Grunt4PostBattle:
	.string "{JPN}しょうぶに まけたのに\nまだ ここを ぐるぐる まわる\lひつようが あるんだろうか?$"

MagmaHideout_2F_1R_Text_Grunt5Intro:
	.string "{JPN}むむ! あやしい やつめ!$"

MagmaHideout_2F_1R_Text_Grunt5Defeat:
	.string "{JPN}うぬぬ……$"

MagmaHideout_2F_1R_Text_Grunt5PostBattle:
	.string "{JPN}オレ ほんとは ポケモンしょうぶ\nあんまり とくいじゃ ないんだよね$"

