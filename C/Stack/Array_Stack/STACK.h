#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int capacity;
    int size;
    int top;
    int *array;
} STACK;

// Prototypes from STACk.c
void Stack_init(STACK *stack);
void push(STACK *stack, int value);
int pop(STACK *stack);
int top(STACK *stack);
int Stack_Size(STACK *stack);
int isEmpty(STACK *stack);
void Stack_free(STACK *stack);