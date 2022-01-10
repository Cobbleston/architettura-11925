evaluate: main.o polishNotation.o stack.o
	gcc -o evaluate main.o polishNotation.o stack.o

main.o: main.c polishNotation.h
	gcc -c main.c

polishNotation.o: polishNotation.c polishNotation.h stack.h
	gcc -c polishNotation.c

stack.o: stack.c stack.h 
	gcc -c stack.c

clean: 
	rm -f *.o evaluate
