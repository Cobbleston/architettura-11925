@0
D = M // D = RAM[0]
@1
D = D&M // D = AND(D, RAM[1])
@2
M = !D // D = NOT(D)


(END)
@END
0;JMP