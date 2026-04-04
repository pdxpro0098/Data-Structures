#include "QUEUE.h"

void Queue_init(QUEUE *queue)
{
    queue->size = 0;
    queue->capacity = 2;
    queue->front = -1;
    queue->rear = -1;
    queue->array = (int *)malloc(sizeof(int) * (queue->capacity));
};

void enqueue(QUEUE *queue, int value)
{

}

void dequeue(QUEUE *queue)
{
}

int front(QUEUE *queue)
{
    return queue->array[queue->front];
}

int back(QUEUE *queue)
{
    return queue->array[queue->rear];
}

int Queue_Size(QUEUE *queue)
{
    return queue->size;
}

int isFull(QUEUE *queue)
{
    return queue->rear + 1 == queue->front;
}

int isEmpty(QUEUE *queue)
{
    return (queue->front == -1 && queue->rear == -1);
}