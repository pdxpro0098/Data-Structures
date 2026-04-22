#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *head;
    struct Node *tail;
} Node;

typedef struct Queue
{
    int size;
    int capacity;
    int front;
    int rear;
} Queue;

void Queue_init(Queue *queue, int maxSize);
int isEmpty(Queue *queue);
int isFull(Queue *queue);
void enqueue(Queue *queue, int value);
int dequeue(Queue *queue);
int peek(Queue *queue);