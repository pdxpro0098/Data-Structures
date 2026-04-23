#include <stdio.h>
#include <stdlib.h>
#include "../../UTILITY.h"

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    int size;
    Node *top;
} STACK;

void STACK_init(STACK *stack);
int STACK_Size(STACK *stack);
void push(STACK *stack, int value);
int pop(STACK *stack);
int top(STACK *stack);
int isEmpty(STACK *stack);