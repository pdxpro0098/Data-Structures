#include "CQueue.h"

int main()
{
    QUEUE *q = (QUEUE *)malloc(sizeof(QUEUE));

    Queue_init(q);
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 5);
    enqueue(q, 6);
    enqueue(q, 7);
    enqueue(q, 8);
    enqueue(q, 9);
    enqueue(q, 10);
    enqueue(q, 11);
    dequeue(q);
    
    printf("Printing queue");
    for (int i = 0; i < q->size; i++)
    {
        printf("%d\n", q->array[i]);
    }

    return 0;
}
