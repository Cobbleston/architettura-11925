#include <stdio.h>

#define ITALIANO
#define GREETING "Hello world!\n"
#define SALUTO "Ciao Mondo!\n"

int main() {
  #ifdef ITALIANO
  printf (SALUTO);
  #endif

  #ifndef ITALIANO
  printf (GREETING);
  #endif

  return 0;
}
