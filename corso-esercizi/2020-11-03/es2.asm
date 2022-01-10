@8
M = 0

// verifico sia maggiore di zero
@0
D = M // D = M[0] = 50
@END
D;JLE // D <= 0

// imposto counter
@counter
M = D // counter = D = 50

// imposto address per SCREEN
@SCREEN
D = A // D = SCREEN
@address
M = D // address = SCREEN

// ciclo per cambiare "colonna"
(LOOP)
    // faccio M[address] = 1 e tmp = 1
    @address
    A = M // A = address
    M = 1 // M[A] = 0000 0000 0000 0001
    @tmp
    M = 1 // tmp = D = 1

    // imposto acounter = 16
    @16
    D = A // D = 16
    @acounter
    M = D // acounter = D = 16

    // ciclo per cambiare riga
    (ALOOP)
        @tmp
        D = M // D = tmp
        MD = M + D // tmp += D = tmp
        @address
        A = M // A = address
        M = D // M[A] = tmp
        // @tmp
        // M = D // tmp = D

        // TEST, conta quanti ne ha stampati (circa)
        @8
        M = M + 1

        // cambio riga
        @address
        D = M    //   D = address
        @32
        D = D + A  //   D += 32
        @address
        M = D    //   address = D = address + 32

        // counter-- e verifica sia sopra 0
        @counter
        MD = M - 1 //   counter--
        @END
        D;JLE // jump if D = counter <= 0

        @acounter
        MD = M - 1 // MD = acounter--
    @ALOOP
    D;JGT // jump if D = acounter <= 0
    // spostamento su parola a dx
    @address
    M = M + 1 // address++

    @counter
    MD = M - 1 //   counter--
    @END // SALTO ALLA FINE SE HO FATTO 50 PIXEL
    D;JLE // jump if D = counter <= 0
@LOOP
D;JGT // while D > 0

(END)
@END
0;JMP