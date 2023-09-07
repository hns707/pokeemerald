Route99_MapScripts::
	.byte 0


Route99_Collectible0::
	lockall
	giveitem ITEM_POTION
	playfanfare MUS_OBTAIN_ITEM
	removeobject 1
	setflag FLAG_UNUSED_0x020
	waitmessage
	releaseall
	end


Route99_HouseSign0::
	lockall
	msgbox Route99_HouseSign0_Text_0
	closemessage
	releaseall
	return


Route99_HouseSign0_Text_0:
	.string "The sign is in poor condition, impossible to read what has been written.$"

Route99_TrainerEncounter0::
	lockall
	trainerbattle_single TRAINER_DOMO_0, Domo0_Intro, Domo0_Outro
	msgbox Domo0_PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Domo0_Intro::
	.string "What a nice time to train! Let's battle!$"

Domo0_Outro::
	.string "It was a nice fight!$"

Domo0_PostBattle::
	.string "I'm exhausted! I will rest a bit.$"