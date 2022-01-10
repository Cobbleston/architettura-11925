// Codificare in linguaggio macchina le seguenti istruzioni HACK:
@12
D=M+1
!D;JGT

// Linguaggio Macchina:
0|000 0000 0000 1100
A instruction + 12

111|1 1101 11|01 0|000
C instruction + M + X+1 + D + null(JMP)

111|0 0011 01|00 0|001
C instruction + A + !X + null(Memory) + JGT