#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define MAX_LENGTH_STACK 10000

int s[MAX_LENGTH_STACK];
int i=0;

int empty(Stack S)
{
    return (i==0);
}

void init(Stack *S)
{
    *S=s;
}

void push(Stack *S, int d)
{   
    if (i==MAX_LENGTH_STACK) {
	printf("Error push: stack full\n");
        exit(1);
    } 	    
    s[i++]=d;
}

int pop(Stack *S)
{
    int d;
    Stack old;
    
    if (i != 0) {
        return s[i--];
    } else {
        printf("Error pop: stack empty\n");
        exit(1);
    }
}

