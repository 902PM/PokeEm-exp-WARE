gText_PkmnTransferredSomeonesPC::
	.string "{STR_VAR_2}は だれかのパソコンの\nボックス『{STR_VAR_1}』に\lてんそう された!$"

gText_PkmnTransferredLanettesPC::
#if IS_FRLG
	.string "{STR_VAR_2}は マサキのパソコンの\n"
#else
	.string "{STR_VAR_2}は マユミのパソコンの\n"
#endif
	.string "ボックス『{STR_VAR_1}』に\lてんそう された!$"

gText_PkmnTransferredSomeonesPCBoxFull::
	.string "だれかのパソコンの\nボックス『{STR_VAR_3}』が\lいっぱいだ!!\p{STR_VAR_2}は\nボックス『{STR_VAR_1}』に\lてんそう された!$"

gText_PkmnTransferredLanettesPCBoxFull::
#if IS_FRLG
	.string "マサキのパソコンの\n"
#else
	.string "マユミのパソコンの\n"
#endif
	.string "ボックス『{STR_VAR_3}』が\nいっぱいだ!!{STR_VAR_2}は\nボックス『{STR_VAR_1}』に\lてんそう された!$"

gText_PkmnSentToPCAfterCatch::
	.string "{STR_VAR_2}は {B_PC_CREATOR_NAME}のパソコンの\nボックス『{STR_VAR_1}』に\lてんそう された!$"

gText_PlayerObtainedTheMon::
	.string "{PLAYER}は {STR_VAR_1}を\nてにいれた!$"

gText_NoMoreRoomForPokemon::
	.string "ポケモンを もちきれません!\pボックスも いっぱいで\nてんそう できません$"

gText_NicknameThisPokemon::
	.string "{STR_VAR_1}に\nニックネームを つけますか?$"
