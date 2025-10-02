.ORIG x3000

GETP

ADD R1, R1, #-1

GETB

IS_AIR
	GETB
	ADD R3, R3, #0
	BRz DONE
	ADD R0, R0, #1
	ADD R5, R5, #1
	BRnp IS_AIR

DONE
REG ; Do not remove
HALT

; your code here

.END
