#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct List
{
    int size;
    Node *listHead;
} List;

void List_init(List *list);
void insertHead(List *list, int value);
void deleteHead(List *list);
void insertTail(List *list, int value);
void deleteTail(List *list);
void insertAt(List* list);
void deleteAt(List* list);