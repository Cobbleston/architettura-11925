all: main

main: main.o somma.o
	gcc -o main main.o somma.o

main.o: main.c somma.h
	gcc -c main.c

somma.o: somma.c somma.h
	gcc -c somma.c

clean: 
	rm *.o main
