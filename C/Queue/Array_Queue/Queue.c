#include "QUEUE.h"

void Queue_init(QUEUE *queue)
{
    queue->size = 0;
    queue->capacity = 2;
    queue->first = -1;
    queue->last = -1;
    queue->array = (int *)malloc(sizeof(int) * (queue->capacity));
};

void enqueue(QUEUE *queue)
{
}

void dequeue(QUEUE *queue)
{
}

int front(QUEUE *queue)
{
    return queue->array[queue->first];
}

int back(QUEUE *queue)
{
    return queue->array[queue->last];
}

int Queue_Size(QUEUE *queue)
{
    return queue->size;
}
