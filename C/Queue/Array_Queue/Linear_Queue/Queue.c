#include "Queue.h"

void Queue_init(Queue *queue, int maxSize)
{
    queue->array = (int *)malloc(sizeof(int) * maxSize);
    queue->capacity = maxSize;
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
}

int isEmpty(Queue *queue)
{
    return queue->size == 0;
}

int isFull(Queue *queue)
{
    return (queue->size == queue->capacity);
}

void enqueue(Queue *queue, int value)
{
    if (isFull(queue))
    {
        printf("Queue is full\n");
        return;
    }
    queue->rear++;
    queue->array[queue->rear] = value;
    queue->size++;
}

int dequeue(Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is Empty");
        return -1;
    }

    int val = queue->array[queue->front];
    queue->front++;
    return val;
}

int peek(Queue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is Empty");
        return -1;
    }
    return queue->array[queue->front];
}