#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int size;
    int capacity;
    int first;
    int last;
    int *array;
} Queue;

void enqueue(Queue *queue);
void dequeue(Queue *queue);
int front(Queue *queue);
int back(Queue *queue);
int size(Queue *queue);