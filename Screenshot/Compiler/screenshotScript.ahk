^!R::				; CTRL+ALT+R to run the script


	loop 4	; keep going for n number of times in this case 400 times
    {  
	Send +{Printscreen}	;keystroke [shift]+[PrintScreen]
	SetKeyDelay, 1500	; delay for 1 seconds
	Send {down}		; keystroke down
	SetKeyDelay, 1500	; delay for 1 seconds
	
    }
return