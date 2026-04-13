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

void CList_init(CList *list);
int CList_size(CList *list);
Node *createNode(int value);
void insertHead(CList *list, int value);
void deleteHead(CList *list);
void insertTail(CList *list, int value);
void deleteTail(CList *list);
void insertAt(CList *list, int index, int value);
void deleteAt(CList *list, int index);