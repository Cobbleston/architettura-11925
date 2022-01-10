typedef struct stackNode {
    int datum;
    struct stackNode *prev;
} stackNode_t;

typedef stackNode_t *Stack;

void init(Stack *S);

void push(Stack *S, int d);

int pop(Stack *S);

