Route99_MapScripts::
	.byte 0


Route99_Collectible0::
	lockall
	giveitem ITEM_POTION
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route99_Collectible0_Text_0
	removeobject 1
	setflag FLAG_UNUSED_0x020
	msgbox Route99_Collectible0_Text_1
	waitmessage
	releaseall
	end


Route99_Collectible0_Text_0:
	.string "You found POTION!$"

Route99_Collectible0_Text_1:
	.string "Added to the inventory.$"