SaffronCity_House_Frlg_MapScripts::
	.byte 0

SaffronCity_House_EventScript_Lass::
	msgbox SaffronCity_House_Text_DontLookAtMyLetter, MSGBOX_NPC
	end

SaffronCity_House_EventScript_Youngster::
	msgbox SaffronCity_House_Text_GettingCopycatPokeDoll, MSGBOX_NPC
	end

SaffronCity_House_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox SaffronCity_House_Text_Pidgey
	waitmoncry
	release
	end

SaffronCity_House_EventScript_Letter::
	msgbox SaffronCity_House_Text_ExplainPPUp, MSGBOX_SIGN
	end

SaffronCity_House_Text_DontLookAtMyLetter::
	.string "… おてがみ ありがとう!\nはやく あなたに あいたいな…\pいやーん!\nてがみ かいてんだから みないで!$"

SaffronCity_House_Text_Pidgey::
	.string "ポッポ『クルックー$"

SaffronCity_House_Text_GettingCopycatPokeDoll::
	.string "モノマネ むすめって かわいい!\nかのじょに ピッピにんぎょう\lプレゼント するんだ!$"

SaffronCity_House_Text_ExplainPPUp::
	.string "… この あいだ\nポイント アップ もらったの\pすごく つよい わざって\nパワー ポイント すくないけど\lこれで ふやせば いいのね…?$"

