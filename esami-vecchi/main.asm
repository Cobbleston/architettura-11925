    @0
    D = M               // D = i-3
    @3
    D = D - A
    @ELSE
    D;JNE               // if i-3 == 0
    @1                  // then
    M = M - 1
    @END
    0;JMP
    (ELSE)              // else
        @2
        D = A
        @k              // *k = 2
        M = D
        @1              // D = MEM[1]
        D = M
        @j              // *j = D
        M = D
        (LOOP)          // while
            @k
            D = M
            @END
            D;JEQ       // *k != 0
            @j          // MEM[1] += *j
            D = M
            @1
            M = M + D
            @k          // *k += 1
            M = M - 1
            @LOOP
            0;JMP
    (END)
        @END
        0;JMP