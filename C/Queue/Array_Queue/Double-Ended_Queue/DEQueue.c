#include "DEQueue.h"

void DEQueue_init(DEQueue *queue, int maxSize)
{
    queue->array = (int *)malloc(sizeof(int) * maxSize);
    queue->capacity = maxSize;
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
}

int DEQueue_size(DEQueue *queue)
{
    return queue->size;
}

int isFull(DEQueue *queue)
{
    return queue->size == queue->capacity;
}

int isEmpty(DEQueue *queue)
{
    return queue->size == 0;
}

void enqueueFront(DEQueue *queue, int value)
{
}

void enqueueRear(DEQueue *queue, int value)
{
}

int dequeueFront(DEQueue *queue)
{
    return 0;
}

int dequeueRear(DEQueue *queue)
{
    return 0;
}
