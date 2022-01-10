//  main.c
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p,*q;

  p=(int*) malloc(sizeof(int));
  *p = 10;
  printf("Valore puntato da p stampato al passo (1): %d\n",*p);
  free(p);
  printf("Valore puntato da p stampato al passo (2): %d\n",*p); 
	//accedere ad un puntatore dopo il free e' una cosa da non fare!
  q=(int*) malloc(sizeof(int));
  *q = 20;
  printf("Valore puntato da p stampato al passo (3): %d\n",*p);
	//accedere ad un puntatore dopo il free e' una cosa da non fare!
  return 0;
}

