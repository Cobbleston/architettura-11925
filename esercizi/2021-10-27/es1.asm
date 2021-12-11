@1
D=M     // D = RAM[1]
@0
D=D-M   // D -= RAM[0]
@2
M = D   // RAM[2] = D
@2
M=M-1   // RAM[2]--
M=M-1   // RAM[2]--
(END)
@END
0;JMP