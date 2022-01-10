#include <stdio.h>

int main() {
  int n;
  float f;
  char s[100];

  printf("Introduci un numero intero, uno con la virgola, ed una parola:\n");
  scanf("%d %f %s",&n, &f, s);
  printf("Ecco cosa hai inserito\n");
  printf("Numero intero: %d\n", n);
  printf("Numero con virgola: %f\n", f);
  printf("Parola: %s\n", s);

  return 0;
}
