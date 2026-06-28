#include "Linked_List_Queue.h"

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
    newNode->next = NULL;
    return newNode;
}

int isEmpty(Queue *queue)
{
    return queue->size == 0;
}

void enqueue(Queue *queue, int value)
{
    Node *newNode = createNode(value);
    if (isEmpty(queue))
    {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else
    {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    queue->size++;
}

int dequeue(Queue *queue)
{
    if (isEmpty(queue))
        return -1;

    Node *toDelete = queue->front;
    int val = queue->front->data;

    queue->front = queue->front->next;

    if (queue->front == NULL)
        queue->rear = NULL;

    free(toDelete);
    queue->size--;
    return val;
}

int peek(Queue *queue)
{
    if (isEmpty(queue))
        return -1;
    return queue->front->data;
}