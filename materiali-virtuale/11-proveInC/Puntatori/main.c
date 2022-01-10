//  main.c
#include <stdio.h>
#include <stdlib.h>

typedef struct persona {
  char nome[50],cognome[50];
  int eta;
} PERSONA;

int main() {
  PERSONA *p,*q;

  p=(PERSONA *) malloc(sizeof(PERSONA));

  printf("Introduci nome: ");
  scanf("%s",( (*p).nome ));
  printf("Introduci cognome: ");
  scanf("%s",( (*p).cognome ));
  printf("Introduci eta: ");
  scanf("%d",&( (*p).eta ));
 
  q=p;
  printf("Ecco il nome: %s\n",(*q).nome);
  printf("Ecco il cognome: %s\n",(*q).cognome);
  printf("Ecco l'eta': %d\n",(*q).eta);

  free(q);

  return 0;
}

