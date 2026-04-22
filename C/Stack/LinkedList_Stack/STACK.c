#include "STACK.h"

void STACK_init(STACK *stack)
{
    stack->size = 0;
    stack->top = NULL;
}

int STACK_Size(STACK *stack)
{
    return stack->size;
}

void push(STACK *stack, int value)
{
    Node *newNode = createNode(value);
    newNode->next = stack->top;
    stack->top = newNode;
    stack->size++;
}

int pop(STACK *stack)
{
    if (stack->top == NULL)
    {
        return -1;
    }
    Node *toDelete = stack->top;
    int val = toDelete->data;
    stack->top = toDelete->next;
    free(toDelete);
    stack->size--;
    return val;
}

int top(STACK *stack)
{
    return stack->top->data;
}

int isEmpty(STACK *stack)
{
    return stack->size == 0;
}