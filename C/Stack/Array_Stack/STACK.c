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

int isEmpty(STACK *stack)
{
    return Stack_Size(stack) == 0;
}

void push(STACK *stack, int value)
{
    if (!stack)
        return;

    if (stack->size == stack->capacity)
    {
        stack->array = (int *)realloc(stack->array, sizeof(int) * (stack->capacity + 2));
        stack->capacity += 2;
    }

    stack->size++;
    stack->top++;

    stack->array[stack->top] = value;
}

int pop(STACK *stack)
{
    if (stack->top > -1)
    {
        int val = stack->array[stack->top];
        stack->top--;
        stack->size--;
        return val;
    }
    else
    {
        printf("Stack is empty\n");
        return -1;
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
