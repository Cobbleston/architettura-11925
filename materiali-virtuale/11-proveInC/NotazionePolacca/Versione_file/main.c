#include <stdio.h>
#include <stdlib.h>

#define USE_FILE

#include "polishNotation.h"

#ifdef USE_FILE
char input[1000];
int i=0;
FILE* filein;
FILE* fileout;
#endif

#ifndef USE_FILE
char *input;
#endif

int main (int argc,char *argv[]) {

    if (argc > 1) {
        #ifndef USE_FILE
        input=argv[1];
        printf(" %s = %d\n",input,eval(input));
        #endif

        #ifdef USE_FILE
        filein=fopen(argv[1],"r");
        fileout=fopen(argv[2],"w");
        while(fgets( &(input[i]),100,filein)!=NULL) {
          while (input[i]!='\0' && input[i]!='\n' && input[i]!='\r') i++;
	  input[i++]=' '; 
	}
 	input[i]='\0';
        fprintf(fileout," %s = %d\n",input,eval(input));
        fclose(filein);
        fclose(fileout);
        #endif
    }
    else {printf("No expression to evaluate\n");}

    exit(0);
}
