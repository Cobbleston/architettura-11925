#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int empty(Stack S)
{
    return (S==NULL);
}

void init(Stack *S)
{
    *S=NULL;
}

void push(Stack *S, int d)
{   
    Stack s = malloc(sizeof(stackNode_t));
    s->prev = *S;
    s->datum = d;
    *S = s;
}

int pop(Stack *S)
{
    int d;
    Stack old;
    
    if (*S != NULL) {
        d = (*S)->datum;
        old = *S;
        d = (*S)->datum;
        free(old);
        *S = (*S)->prev;
        return d;
    } else {
        printf("Error pop: stack empty\n");
        exit(1);
    }
}

