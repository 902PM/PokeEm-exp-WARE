VermilionCity_House3_Frlg_MapScripts::
	.byte 0

VermilionCity_House3_EventScript_Boy::
	msgbox VermilionCity_House3_Text_PidgeyFlyLetterToSaffron, MSGBOX_NPC
	end

VermilionCity_House3_EventScript_Lass::
	msgbox VermilionCity_House3_Text_SendMyPidgeyToUnionRoom, MSGBOX_NPC
	end

VermilionCity_House3_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox VermilionCity_House3_Text_Pidgey
	waitmoncry
	release
	end

VermilionCity_House3_EventScript_Letter::
	msgbox VermilionCity_House3_Text_DearPippiLetter, MSGBOX_SIGN
	end

VermilionCity_House3_Text_PidgeyFlyLetterToSaffron::
	.string "きたの ヤマブキシティまで\nポッポに てがみを\lとどけて もらうのさ!$"

VermilionCity_House3_Text_Pidgey::
	.string "ポッポ『クルックー$"

VermilionCity_House3_Text_DearPippiLetter::
	.string "…ピピちゃん\nこんど あそびに いきたい です\pヤマブキ シティでは ロケットだんの\nじけんが おおい そうですね\pクチバは そうでも ありません…$"

VermilionCity_House3_Text_SendMyPidgeyToUnionRoom::
	.string "わたしは いろんな ひとと\nメール こうかんを したいから\pいつも ユニオン ルーム で\nポッポに メールを もたせて\lこうかん してるのよ!$"

