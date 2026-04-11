#include <stdio.h>
// #include "Singly_Linked_List/SLL.h"
#include "Doubly_Linked_List/DLL.h"

// void printList(List *list)
// {
//     Node *temp = list->listHead;

//     while (temp != NULL)
//     {
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL");
// }

void printList(DList *list)
{
    Node *temp = list->listHead;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void printListReverse(DList *list)
{
    Node *temp = list->listTail;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    printf("NULL");
}