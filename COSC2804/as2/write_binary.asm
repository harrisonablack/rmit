.ORIG x3000

; Store current player position
  GETP

; Initialise variables for loop
  LD R5, MASK_INIT
  LD R6, COUNT_INIT
  LD R7, NUMBER_TO_CONVERT

LOOP
  ; AND R7, Number, R5, Mask
  AND R4, R7, R5
  REG
  BRz PRINT_ZERO
  LD R3, ONE
  BRnzp PRINT_CHAR

PRINT_ZERO
  LD R3, ZERO
  ;LD R3, ONE
  BRnzp PRINT_CHAR

PRINT_CHAR
  ; Player pos still in R0,1,2
  ; Move block to z+1
  ADD R2, R2, #1

  ; Pos in R0,1,2 block ID in R3
  SETB

  ADD R5, R5, R5
  ADD R6, R6, #-1

  ;REG
  BRp LOOP

HALT

; Number to convert to binary
NUMBER_TO_CONVERT .FILL #237

; Sets mask to 1, binary x0001 then doubles, 0001 -> 0010 -> 0100 - > 1000 etc
MASK_INIT   .FILL x0001

; How many times to repeat the loop? 16 as the number is stored in 16 bits
COUNT_INIT .FILL #16

; Set block ids, Stone for 1, Air for zero
ONE     .FILL #1
ZERO    .FILL #0

; Set zero block id to grass for better visibility
;ZERO    .FILL #2          ; Block id 0, air represents 0

.END
