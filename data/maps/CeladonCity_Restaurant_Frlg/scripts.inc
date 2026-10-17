CeladonCity_Restaurant_Frlg_MapScripts::
	.byte 0

CeladonCity_Restaurant_EventScript_Chef::
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_Woman::
	msgbox CeladonCity_Restaurant_Text_OftenGoToDrugstore, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_CoinCaseMan::
	lock
	faceplayer
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
	checkitemspace ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
	setflag FLAG_GOT_COIN_CASE
	release
	end

CeladonCity_Restaurant_EventScript_NoRoomForCoinCase::
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
	release
	end

CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase::
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
	release
	end

CeladonCity_Restaurant_EventScript_WorkerM::
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_FatMan::
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
	end

CeladonCity_Restaurant_Text_TakingBreakRightNow::
	.string "いらっしゃい!\pじょうれん ばかりで わるいね!$"

CeladonCity_Restaurant_Text_OftenGoToDrugstore::
	.string "うちで かってる ポケモン…\nたいりょく ないから いつも\lデパートで おくすり かって くるの$"

CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner::
	.string "ひそひそ… むしゃ むしゃ…\n… ゲーム コーナーの したに\lちかしつが ある らしいね…$"

CeladonCity_Restaurant_Text_ManLostItAllAtSlots::
	.string "もぐもぐ…!\pあそこの テーブルの おっさん\nスロットで おかね ぜんぶ\lつかっちゃった らしいよ!$"

CeladonCity_Restaurant_Text_TakeThisImBusted::
	.string "うおう… わらってくれ!\pゲーム コーナーで すって\nいちもん なしに なっちまった!\pもう スロットは やらん!\nじみちに はたらくぞ!\p… というわけで\nこれは おまえに やる!$"

CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan::
	.string "{PLAYER}は おっさん から\nコインケースを もらった!$"

CeladonCity_Restaurant_Text_MakeRoomForThis::
	.string "にもつが いっぱい だぜ$"

CeladonCity_Restaurant_Text_ThoughtIdWinItBack::
	.string "あーあ!\nいつか かならず かてる!\lと おもったのに この ざまだ…!$"

