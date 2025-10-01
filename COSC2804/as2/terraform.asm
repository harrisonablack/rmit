.ORIG x3000

GETP
ST R0, P_X
ST R1, P_Y
ST R2, P_Z

ADD R0, R0, #-2
ADD R2, R2, #-2


LD R6, SIZE
ADD R6, R6, #1
LD R7, SIZE

ADD R1, R1, #-1

BRnzp ZLOOP


XLOOP
  ;R7 XLOOP
  LD R1, P_Y
  ADD R1, R1, #-1

  LD R3, BLOCK
  ADD R0, R0, #1
  ;
  ; Here blocks iterate through 3x3 coordinates
  ; Make sure to imeplement ignore 0,0

  ; Sets register 3 with blockid
  GETB
  ADD R3, R3, #0

  BRz IS_AIR
  BRnp IS_BLOCK

  IS_BLOCK
    ADD R1, R1, #1
    GETB
    ADD R3, R3, #0
    BRnz DONE_CHECK
    LD R3, AIR
    SETB
    BRnzp IS_BLOCK



  IS_AIR
    LD R3, DIRT
    SETB
    ADD R1, R1, #-1
    GETB

    ; Checks if current y is 0 or neg
    ; if so move to next block
    ADD R1, R1, #0
    BRn DONE_CHECK

    ; Checks if next block is air, if so call IS_AIR again
    ADD R3, R3, #0
    BRz IS_AIR

  DONE_CHECK
  ADD R7, R7, #-1
  BRp XLOOP
  BRnz ZLOOP


ZLOOP
  ;R6 ZLOOP
  LD R0, P_X
  LD R7, SIZE
  ADD R0, R0, #-2
  ADD R2, R2, #1
  ADD R6, R6, #-1
  BRp XLOOP


HALT

P_X .FILL x0
P_Y .FILL x0
P_Z .FILL x0

C_I .FILL x0
C_Z .FILL x0

SIZE .FILL #3

BLOCK .FILL #1
DIRT .FILL #3
AIR .FILL #0
MAX_HEIGHT .FILL #320

.END
