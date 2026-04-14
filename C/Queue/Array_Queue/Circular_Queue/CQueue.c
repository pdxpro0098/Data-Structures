#include "CQUEUE.h"

void Queue_init(QUEUE *queue)
{
    queue->size = 0;
    queue->capacity = 2;
    queue->front = -1;
    queue->rear = -1;
    queue->array = (int *)malloc(sizeof(int) * (queue->capacity));
};

int Queue_Size(QUEUE *queue)
{
    return queue->size;
}

void enqueue(QUEUE *queue, int value)
{
    if (isFull(queue))
    {
        int *newArray = (int *)malloc(sizeof(int) * (queue->capacity + 2));

        int i, index = queue->front;

        for (i = 0; i < queue->size; i++)
        {
            newArray[i] = queue->array[index];
            index = (index + 1) % queue->capacity;
        }

        free(queue->array);

        queue->array = newArray;
        queue->capacity += 2;
        queue->front = 0;
        queue->rear = queue->size - 1;
    }

    if (isEmpty(queue))
    {
        queue->front = 0;
        queue->rear = 0;
    }
    else
    {
        queue->rear = (queue->rear + 1) % queue->capacity;
    }

    queue->array[queue->rear] = value;
    queue->size++;
}

void dequeue(QUEUE *queue)
{
    if (isEmpty(queue))
        return;

    if (queue->front == queue->rear)
    {
        queue->front = -1;
        queue->rear = -1;
    }
    else
    {
        queue->front = (queue->front + 1) % queue->capacity;
    }

    queue->size--;
}

int front(QUEUE *queue)
{
    if (!isEmpty(queue))
    {
        return queue->array[queue->front];
    }
    return -1;
}

int isFull(QUEUE *queue)
{
    return queue->size == queue->capacity;
}

int isEmpty(QUEUE *queue)
{
    return queue->size == 0;
}

void Queue_free(QUEUE *queue)
{
    free(queue->array);
    free(queue);
}
