#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int size;
    int capacity;
    int first;
    int last;
    int *array;
} QUEUE;

void QUEUE_init(QUEUE *queue); 
void enqueue(QUEUE *queue);
void dequeue(QUEUE *queue);
int front(QUEUE *queue);
int back(QUEUE *queue);
int QUEUE_Size(QUEUE *queue);