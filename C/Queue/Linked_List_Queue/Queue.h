#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct Queue
{
    int size;
    Node *front;
    Node *rear;
} Queue;

void Queue_init(Queue *queue);
Node *createNode(int value);
int isEmpty(Queue *queue);
void enqueue(Queue *queue, int value);
int dequeue(Queue *queue);
int peek(Queue *queue);