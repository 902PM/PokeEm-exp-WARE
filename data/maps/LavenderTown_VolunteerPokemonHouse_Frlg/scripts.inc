LavenderTown_VolunteerPokemonHouse_Frlg_MapScripts::
	.byte 0

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
	checkitemspace ITEM_POKE_FLUTE
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
	setflag FLAG_GOT_POKE_FLUTE
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
	lock
	faceplayer
	famechecker FAMECHECKER_MRFUJI, 0
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
	waitmoncry
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
	waitmoncry
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
	lockall
	famechecker FAMECHECKER_MRFUJI, 2
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
	releaseall
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
	end

LavenderTown_PokemonCenter_1F_Text_HearMrFujiNotFromAroundHere::
	.string "さいきん この まちに\nひっこして きたんだ!\pきけば フジろうじんも\nもともとは この まちの\lしゅっしんでは ないらしいな$"

LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo::
	.string "おっかしいなー!\nフジ ろうじんが いないぞ!\lどこに いったのかな?$"

LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother::
	.string "フジ ろうじん ガラガラの れいを\nなぐさめに いってたんだね$"

LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons::
	.string "ここは もともと\nフジ じいちゃんの おうち なの\pじいちゃん やさしいのよ!\pすてられたり かえなくなった\nポケモンを あずかって\lせわ してるの$"

LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug::
	.string "はあ あったかい…!\nポケモンって だっこ すると\lあったかいんだよねー!$"

LavenderTown_VolunteerPokemonHouse_Text_Nidorino::
	.string "ニドリーノ『がぉーっ!$"

LavenderTown_VolunteerPokemonHouse_Text_Psyduck::
	.string "コダック『ぐわっぱ!$"

LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis::
	.string "フジ『さて {PLAYER}{KUN}…\pポケモンずかん づくりは\nポケモンに たいして\lふかい あいじょうが ないと\lかんせいは たいへん むずかしい\pその たすけに なるか わからんが\nこれを あなたに さしあげよう!$"

LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji::
	.string "{PLAYER}は フジ ろうじんから\nポケモンのふえを もらった!$"

LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute::
	.string "ポケモンのふえを ふくと\nグーグー ねむってる ポケモンでも\lげんきが わいて とびおきる!\pポケモンが いねむり して\nこまったら つかって みなさい$"

LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis::
	.string "にもつが いっぱいだな$"

LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou::
	.string "フジ『このあいだ さしあげた\nふえは やくに たってるかな?$"

LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped::
	.string "ごうか しょうひんが あたる!\nげっかん ポケモンの とも\lビッグ・プレゼント!\p…おうぼ ほうほうは\p…あら きりとって ある!\nけんしょうが すき なのかな?$"

LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf::
	.string "ポケモン ざっしが ならんでる!\p…ポケモン てちょう\p…ポケモン グラフ$"

