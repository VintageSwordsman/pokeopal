Stikx_MapScripts::
	.byte 0

Stikx_EventScript_CitySign::
	msgbox Stikx_Text_CitySign, MSGBOX_SIGN
	end

Stikx_Text_CitySign:
	.string "The Township of STIKX\p"
	.string "Route 1 {COLOR BLUE}East{COLOR DARK_GRAY} "
	.string "Route 4 {COLOR BLUE}North{COLOR DARK_GRAY}\p"
	.string "“Looks like you are stuck out in the\n"
	.string "Stikx.”$"
