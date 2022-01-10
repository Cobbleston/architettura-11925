// riempire dall'indirizzo R0 a indirizzo R1 la memoria con soli 1

// provare ad eseguirlo mettendo R0=16384 e R1=24575

(BEGIN)		// while R0<=R1
		
	@R0
	D=M

	@R1
	D=D-M

	@END
	D;JGT

	@R0	//   RAM[R0]=-1
	A=M
	M=-1

	@R0	//   R0++
	M=M+1

	@BEGIN	// end-while
	0;JMP

(END)	
	@END
	0;JMP
