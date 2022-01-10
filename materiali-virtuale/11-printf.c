#include "stdio.h"

int main()
{
  int intero=256;
  float virgola=34.56;
  double lungo=34.56;
  char stringa[]="STRINGA";
  char stringaL[]="STRINGA MOLTO LUNGA";
  char car = 'a';
  printf("%%d\t|%d|\n",intero);
  printf("%%10d\t|%10d|\n",intero);
  printf("%%-10d\t|%-10d|\n",intero);
  printf("%%f\t|%f|\n",virgola);
  printf("%%lf\t|%lf|\n",lungo);
  printf("%%10f\t|%10f|\n",virgola);
  printf("%%-10f\t|%-10f|\n",virgola);
  printf("%%10.5f\t|%10.5f|\n",virgola);
  printf("%%s\t|%s|\t\t|%s|\n",stringa,stringaL);
  printf("%%10s\t|%10s|\t\t|%10s|\n",stringa,stringaL);
  printf("%%15.10s\t|%15.10s|\t|%15.10s|\n",stringa,stringaL);
  printf("%%c\t|%c|\n",car);
  return(0);
}


