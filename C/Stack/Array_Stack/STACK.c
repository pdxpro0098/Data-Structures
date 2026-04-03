#include "STACK.h"

void Stack_init(STACK *stack)
{
    stack->capacity = 2;
    stack->top = -1;
    stack->size = 0;
    stack->array = (int *)malloc(sizeof(int) * (stack->capacity));
}

int Stack_Size(STACK *stack)
{
    return stack->size;
}

void push(STACK *stack, int value)
{
}

void pop(STACK *stack)
{
}

int top(STACK *stack)
{
}
