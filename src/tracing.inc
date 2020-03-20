
#define pushAll() 	PUSH	BC
#defcont \		PUSH 	DE
#defcont \		PUSH 	AF
#defcont \		PUSH 	HL

#define popAll() 	POP	HL
#defcont \		POP 	AF
#defcont \		POP 	DE
#defcont \		POP 	BC

#define trace(marker) 	pushAll()
#defcont \		cpm.cWriteStr(marker)
#defcont \ 		popAll()

