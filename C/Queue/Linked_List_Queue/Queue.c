#include "Queue.h"

void Queue_init(Queue *queue)
{
    queue->size = 0;
    queue->front = NULL;
    queue->rear = NULL;
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->head = NULL;
    newNode->tail = NULL;
}

int isEmpty(Queue *queue)
{
    return queue->size == 0;
}

void enqueue(Queue *queue, int value);
int dequeue(Queue *queue);

int peek(Queue *queue)
{
    return queue->front->data;
}