#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *head;
    struct Node *tail;
} Node;

typedef struct DCLL
{
    int size;
    Node *head;
    Node *tail;
};
