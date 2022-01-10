//  main.c
#include <stdio.h>

#include "stack.h"

#define MAX_STACK 10000
int main() {
  int i;
  Stack s;

  init(&s);

  for (i=0; i<MAX_STACK; i++) push(&s,i);

  while(!empty(s)) printf("Valore estratto: %d\n",pop(&s));

  return 0;
}

