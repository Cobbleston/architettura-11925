// for (i = ram[0], i < ram[1], i++)
// {
//     ram[i] = 1;
// }

@0
D = M // D = RAM[0]
(LOOP)
    @1
    A = M // A = RAM[1]
    A = A - D // A -= D cioè A = RAM[1] - RAM[0] - i
    M = 1 // RAM[A] = 1
    D = D - 1 // D--
@LOOP
D;JGE // jump se D >= 0



(END)
@END
0;JMP