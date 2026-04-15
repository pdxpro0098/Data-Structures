#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct DCLL
{
    int size;
    Node *head;
    Node *tail;
} DCLL;

void DCLL_init(DCLL *list);
int DCLL_size(DCLL *list);
Node *createNode(int value);
void insertHead(DCLL *list, int value);
void insertTail(DCLL *list, int value);
void deleteHead(DCLL *list);
void deleteTail(DCLL *list);
void insertAt(DCLL *list, int index, int value);
void deleteAt(DCLL *list, int index);
void printDCList(DCLL *list);
void printDCListReverse(DCLL *list);