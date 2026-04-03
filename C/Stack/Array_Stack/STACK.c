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
    if (!stack)
        return;

    if (stack->size == stack->capacity)
    {
        stack->array = (int *)realloc(stack->array, sizeof(int) * stack->capacity + 2);
        stack->capacity += 2;
    }

    stack->size++;
    stack->top++;

    stack->array[stack->top] = value;
}

void pop(STACK *stack)
{

    if (stack->top > -1)
    {
        stack->top--;
        stack->size--;
    }
    else
    {
        printf("Stack is empty");
    }
}

int top(STACK *stack)
{
    if (stack->top == -1)
    {
        return -1;
    }

    return stack->array[stack->top];
}
