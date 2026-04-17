#include "DCLL.h"

void DCLL_init(DCLL *list)
{
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
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
    Node *newNode = createNode(value);
    if (list->head == NULL)
    {
        list->head = newNode;
        list->tail = newNode;
        newNode->next = list->head;
        newNode->prev = list->head;
    }
    else
    {
        newNode->next = list->head;
        newNode->prev = list->tail;

        list->head->prev = newNode;
        list->tail->next = newNode;

        list->head = newNode;
    }
    list->size++;
}

void insertTail(DCLL *list, int value)
{
    Node *newNode = createNode(value);
    if (list->head == NULL)
    {
        list->head = newNode;
        list->tail = newNode;
        newNode->next = list->head;
        newNode->prev = list->head;
    }
    else
    {
        newNode->next = list->head;
        newNode->prev = list->tail;

        list->head->prev = newNode;
        list->tail->next = newNode;

        list->tail = newNode;
    }
    list->size++;
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