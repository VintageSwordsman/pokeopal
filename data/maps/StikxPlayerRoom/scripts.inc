StikxPlayerRoom_MapScripts::
	.byte 0

SPH_EventScript_Dev::
	lock
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_B_DASH
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	givemon SPECIES_MEW, 100, ITEM_NONE, move1=MOVE_SURF, move2=MOVE_FLY, move3=MOVE_STRENGTH, move4=MOVE_WATERFALL
	msgbox SPH_Text_DEV MSGBOX_NPC
	release
	end
	
SPH_Text_DEV:
	.string "DEV Mode Activated!$"

SPH_EventScript_Starter::
	lockall
	special ChooseStarter
	waitstate
	releaseall
	end

SPH_EventScript_PC::
	setvar VAR_0x8004, PC_LOCATION_PLAYER_HOUSE_FRLG
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox SPH_Text_PC, MSGBOX_SIGN
	waitmessage
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

SPH_Text_PC:
	.string "{PLAYER} enters password.\p"
	.string "Steam is loading on the PC.\p"
	.string "Half-Life 2 installing,\n"
	.string "this may take a while on Dial-up!$"

SPH_ES_TurnOnPC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_PLAYER_HOUSE_FRLG
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC
	special BedroomPC
	waitstate
	releaseall
	end
