CeruleanCity_House1_Frlg_MapScripts::
	.byte 0

CeruleanCity_House1_EventScript_BadgeGuy::
	lock
	faceplayer
	msgbox CeruleanCity_House1_Text_BadgesHaveAmazingSecrets
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeAnotherBadge::
	message CeruleanCity_House1_Text_DescribeWhichBadge
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BADGES
	special ShowScrollableMultichoice
	switch VAR_RESULT
	case 0, CeruleanCity_House1_EventScript_DescribeBoulderBadge
	case 1, CeruleanCity_House1_EventScript_DescribeCascadeBadge
	case 2, CeruleanCity_House1_EventScript_DescribeThunderBadge
	case 3, CeruleanCity_House1_EventScript_DescribeRainbowBadge
	case 4, CeruleanCity_House1_EventScript_DescribeSoulBadge
	case 5, CeruleanCity_House1_EventScript_DescribeMarshBadge
	case 6, CeruleanCity_House1_EventScript_DescribeVolcanoBadge
	case 7, CeruleanCity_House1_EventScript_DescribeEarthBadge
	case 8, CeruleanCity_House1_EventScript_StopDescribingBadges
	case 127, CeruleanCity_House1_EventScript_StopDescribingBadges
	end

CeruleanCity_House1_EventScript_DescribeBoulderBadge::
	msgbox CeruleanCity_House1_Text_AttackStatFlash
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeCascadeBadge::
	msgbox CeruleanCity_House1_Text_ObeyLv30Cut
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeThunderBadge::
	msgbox CeruleanCity_House1_Text_SpeedStatFly
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeRainbowBadge::
	msgbox CeruleanCity_House1_Text_ObeyLv50Strength
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeSoulBadge::
	msgbox CeruleanCity_House1_Text_DefenseStatSurf
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeMarshBadge::
	msgbox CeruleanCity_House1_Text_ObeyLv70RockSmash
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeVolcanoBadge::
	msgbox CeruleanCity_House1_Text_SpStatsWaterfall
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_DescribeEarthBadge::
	msgbox CeruleanCity_House1_Text_AllMonsWillObeyYou
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end

CeruleanCity_House1_EventScript_StopDescribingBadges::
	msgbox CeruleanCity_House1_Text_ComeVisitAnytime
	release
	end

CeruleanCity_House1_Text_BadgesHaveAmazingSecrets::
	.string "うでが あがった\nポケモントレーナーだけが もらえる\lポケモン バッジ\pあなたも いくつか もってるね\pその バッジには\nすごい ひみつが あるのです$"

CeruleanCity_House1_Text_DescribeWhichBadge::
	.string "では…\pポケモン バッジ 8つの ひみつ\nどれに ついて はなし ましょう?$"

CeruleanCity_House1_Text_ComeVisitAnytime::
	.string "はなしを ききたく なったら\nまた いらっしゃい$"

CeruleanCity_House1_Text_AttackStatFlash::
	.string "すべての\nポケモンの こうげき りょくが\lすこし たかく なります\pそれから フラッシュの わざは\nたたかって いない ときでも\lつかえるように なります$"

CeruleanCity_House1_Text_ObeyLv30Cut::
	.string "レベル30までの ポケモンは\nひとから もらった ポケモンでも\lおとなしく いうことを ききます\pそれいじょう レベルが たかいと\nうまく あつかえません\pそれから いあいぎりの わざは\nたたかって いない ときでも\lつかえるように なります$"

CeruleanCity_House1_Text_SpeedStatFly::
	.string "すべての\nポケモンの すばやさが\lすこし たかく なります\pそれから そらをとぶ わざは\nたたかって いない ときでも\lつかえるように なります$"

CeruleanCity_House1_Text_ObeyLv50Strength::
	.string "レベル50までの ポケモンは\nひとから もらった ポケモンでも\lおとなしく いうことを ききます\pそれいじょう レベルが たかいと\nうまく あつかえません\pそれから かいりきの わざは\nたたかって いない ときでも\lつかえるように なります$"

CeruleanCity_House1_Text_DefenseStatSurf::
	.string "すべての\nポケモンの ぼうぎょりょくが\lすこし たかく なります\pそれから なみのりの わざは\nたたかって いない ときでも\lつかえるように なります$"

CeruleanCity_House1_Text_ObeyLv70RockSmash::
	.string "レベル70までの ポケモンは\nひとから もらった ポケモンでも\lおとなしく いうことを ききます\pそれいじょう レベルが たかいと\nうまく あつかえません\pそれから いわくだきの わざは\nたたかって いない ときでも\lつかえるように なります$"

CeruleanCity_House1_Text_SpStatsWaterfall::
	.string "すべての\nポケモンの とくこう とくぼうが\lすこし たかく なります\pそれから たきのぼりの わざは\nたたかって いない ときでも\lつかえるように なります$"

CeruleanCity_House1_Text_AllMonsWillObeyYou::
	.string "すべての ポケモンは\nおとなしく いうことを ききます$"

