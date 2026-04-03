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
void pop(STACK *stack);
int top(STACK *stack);
int Stack_Size(STACK *stack);