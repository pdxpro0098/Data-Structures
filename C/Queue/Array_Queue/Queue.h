#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int size;
    int capacity;
    int front;
    int rear;
    int *array;
} QUEUE;

void Queue_init(QUEUE *queue);
int Queue_Size(QUEUE *queue);
void enqueue(QUEUE *queue, int value);
void dequeue(QUEUE *queue);
int front(QUEUE *queue);
int isFull(QUEUE *queue);
int isEmpty(QUEUE *queue);