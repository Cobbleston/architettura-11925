// RETTANGOLO ALTO 20 IN RAM[0]
@0
D = M // D = RAM[0] = 20
@END
D;JLE  // if D > 0 then
@counter
M = D    //  counter = D = 20
@SCREEN
D = A // D = SCREEN
@address
M = D    //  address = SCREEN

(LOOP)    //  repeat
   @address
   A = M    //   A = address
   M = -1   //   M[A] = 111...1
   @address
   D = M    //   D = address
   @32
   D = D + A  //   D += 32
   @address
   M = D    //   address = D
   @counter
   MD = M - 1 //   counter--
@LOOP
D;JGT  //  until counter > 0

(END)
@END
0;JMP