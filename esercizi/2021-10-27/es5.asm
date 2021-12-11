@1
D = M // D = RAM[1]
@3
M = D // RAM[3] = D = RAM[1]
(DIVISIONE)
    @0
    D = M // D = RAM[0]
    @3
    M = M - D // RAM[3] -= D = RAM[0], È IL RESTO, LO TENGO IN RAM3
    @2
    M = M + 1 // RAM[2]++
    @0
    D = M // D = RAM[0]
    @3
    D = M - D // D = RAM[3] - RAM[0]
@DIVISIONE
D;JGT // jump se D > 0
// @1
// D = M // D = RAM[1]
// @4
// D = D - M // D -= RAM[4]

(END)
@END
0;JMP