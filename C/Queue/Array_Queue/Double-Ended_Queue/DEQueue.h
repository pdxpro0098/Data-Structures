#include <stdio.h>
#include <stdlib.h>

typedef struct DEQueue
{
    int size;
    int capacity;
    int front;
    int rear;
    int *array;
} DEQueue;

void DEQueue_init(DEQueue *queue, int maxSize);
int DEQueue_size(DEQueue *queue);
int isFull(DEQueue *queue);
int isEmpty(DEQueue *queue);
void enqueueFront(DEQueue *queue, int value);
void enqueueRear(DEQueue *queue, int value);
int dequeueFront(DEQueue *queue);
int dequeueRear(DEQueue *queue);