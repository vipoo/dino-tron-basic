
#define		BDOS		0005H

#define cpm.pTerm()        	RST     00


#define cpm.cReadChr()       	LD      C, 01H
#defcont \                      CALL    BDOS

#define cpm.cRead()       	LD      C, 01H
#defcont \                      CALL    BDOS

#define cpm.cWriteChr(chr)   	LD      E, chr
#defcont \			LD      C, 02H
#defcont \                      CALL    BDOS

#define cpm.cWrite()		LD      C, 02H
#defcont \                      CALL    BDOS

#define cpm.aReadChr()       	LD      C, 03H
#defcont \                      CALL    BDOS

#define cpm.aWriteChr(chr)   	LD      E, chr
#defcont \                      LD      C, 04H
#defcont \                      CALL    BDOS

#define cpm.cWriteStr(str)	LD      DE, str
#defcont \			LD      C, 09H
#defcont \                      CALL    BDOS

#define cpm.cStat()   		LD      C, 0BH
#defcont \                      CALL    BDOS

