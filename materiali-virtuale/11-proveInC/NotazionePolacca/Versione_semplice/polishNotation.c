#include <stdio.h>
#include <stdlib.h>

#include "polishNotation.h"
#include "stack.h"

enum tokenT {add,subtract,integer,end,ill};

typedef enum tokenT tokenType;

tokenType read (inType *expr, int *value);

int eval (inType expr) {
    Stack S;
    int tokenvalue, numTop, numSuc, finished=0;
    tokenType t;
 
    init(&S);
    while  (!finished) {
        tokenvalue = 0;
        t = read(&expr,&tokenvalue);
        if (t == ill) exit(1);
        else if (t==end) finished=1;   
        else if (t == integer) push(&S,tokenvalue);
        else {
            numTop = pop(&S);
            numSuc = pop(&S);
            if (t==add) numSuc+=numTop;
    	    if (t==subtract) numSuc-=numTop;
            push(&S,numSuc);
	}		
    }
    return pop(&S);
}

tokenType read (inType *expr, int *value) {
    tokenType token;
    inType s = *expr;
    while ( (*s) == ' ') s++; 
    if ( ((*s) >= '0') && ((*s) <= '9') ) {
        token = integer;
        while ( ((*s) >= '0') && ((*s) <= '9') ) {
            *value = (*value)*10 + ((*s) - '0');
            s++;
        }
    } else
        switch(*s) {
            case '+' : {token = add; s++; break;}
            case '-' : {token = subtract; s++; break;} 
            case '\0': {token = end; s++; break;} 
            default  : {token = ill;printf("Illegal character: %c\n",*s);}
        }
   *expr = s;
   return token;
}

