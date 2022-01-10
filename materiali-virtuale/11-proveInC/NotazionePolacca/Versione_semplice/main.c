#include <stdio.h>
#include <stdlib.h>

#include "polishNotation.h"

int main (int argc,char *argv[]) {

    if (argc > 1) {
        inType input=argv[1];
        printf("The result is %d\n",eval(input));
    }

    exit(0);
}
