#include "DCLL.h"

void DCLL_init(DCLL *list)
{
    list->size = 0;
    list->head = (Node *)malloc(sizeof(Node));
    list->tail = (Node *)malloc(sizeof(Node));
}

int DCLL_size(DCLL *list)
{
    return list->size;
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertHead(DCLL *list, int value)
{
}

void insertTail(DCLL *list, int value)
{
}

void deleteHead(DCLL *list)
{
}

void deleteTail(DCLL *list)
{
}

void insertAt(DCLL *list, int index, int value)
{
}

void deleteAt(DCLL *list, int index)
{
}

void printDCList(DCLL *list)
{
    Node *temp = list->head;

    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != list->head);
    printf("NULL");
}

void printDCListReverse(DCLL *list)
{
    Node *temp = list->tail;

    do
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    } while (temp != list->tail);
    printf("NULL");
}