#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct List
{
    int size;
    Node *head;
} List;

void List_init(List *list);
int List_size(List *list);
void insertHead(List *list, int value);
void deleteHead(List *list);
void insertTail(List *list, int value);
void deleteTail(List *list);
void insertAt(List *list, int index, int value);
void deleteAt(List *list, int index);
void printList(List *list);