//  sum = 0
//  pot = 1
//  for (j = ram[0]; j > 0; j--)
//  {
//      pot *= 2;
//  }
//  for (i = ram[1]; i > 0; i--)
//  {
//      sum += pot
//  }

@3
M = 1
(PRODOTTO)
    @3
    D = M // D = RAM[3]
    @3
    M = M + D // RAM[3] += D
    @0
    M = M - 1 // RAM[0]--
    D = M
@PRODOTTO
D;JGT // jump se D > 0
(SOMMA)
    @3
    D = M // D = RAM[3], dove è il prodotto
    @2
    M = M + D // M += RAM[3]
    @1
    M = M - 1 // RAM[1]--
    D = M
@SOMMA
D;JGT // jump se D > 0



(END)
@END
0;JMP