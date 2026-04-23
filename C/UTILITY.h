#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void swap(int *a, int *b);

int isPrime(int n);

Node *createNode(int value);