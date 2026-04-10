#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct DList
{
    int size;
    Node *listHead;
} DList;

void DList_init(DList *list);
void insertHead(DList *list, int value);
void deleteHead(DList *list);
void insertTail(DList *list, int value);
void deleteTail(DList *list);
void insertAt(DList *list, int index, int value);
void deleteAt(DList *list, int index);
int DList_size(DList *list);