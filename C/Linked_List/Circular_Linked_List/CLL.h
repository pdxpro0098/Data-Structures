#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct CList
{
    int size;
    Node *head;
} CList;

void List_init(CList *list);
int List_size(CList *list);
void insertHead(CList *list, int value);
void deleteHead(CList *list);
void insertTail(CList *list, int value);
void deleteTail(CList *list);
void insertAt(CList *list, int index, int value);
void deleteAt(CList *list, int index);