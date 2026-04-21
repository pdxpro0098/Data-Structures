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

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void push(STACK *stack, int value);
int pop(STACK *stack);
int top(STACK *stack)
{
    return stack->top;
}

int isEmpty(STACK *stack)
{
    return stack->size == 0;
}