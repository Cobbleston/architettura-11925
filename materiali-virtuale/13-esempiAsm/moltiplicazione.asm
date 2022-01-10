// R2 = R0 x R1
// assumete R1>0

	@R2	// R2=0
	M=0

	@R1	// counter=R1
	D=M
	@counter
	M=D

(REPEAT)	// repeat
	@R0	//   D=R0
	D=M

	@R2	//   R2=D+R2
	M=D+M

	@counter//   counter--
	M=M-1	

	@counter// until counter==0
	D=M
	@REPEAT
	D;JNE

(END)	
	@END
	0;JMP
