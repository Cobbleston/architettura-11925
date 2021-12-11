// Scrivere un programma hack che traccia una riga verticale in colonna 20 lunga 50
@0
D = M // D = M[0] = 50
@END
D;JLE // SALTA ALLA FINE SE D <= 0
@counter
M = D // counter = D = 50

@SCREEN
D = A // D = SCREEN
@address
M = D // address = SCREEN

@address
D = M // D = address
M = D + 1 // address = address+1, mi sposto nella sezione subito a destra

(LOOP)
    @2048
    D = A // D = 2048
    @address
    A = M // A = address
    M = D // M[A] = 0000 1000 0000 0000
    @address
    D = M    //   D = address
    @32
    D = D + A  //   D += 32
    @address
    M = D    //   address = D
    @counter
    MD = M - 1 // counter--
@LOOP
D;JGT // D > 0



(END)
@END
0;JMP

// 0000 0000 0000 0000  0000 1000 0000 0000
// 0 and 2048