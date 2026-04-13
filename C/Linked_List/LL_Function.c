#include <stdio.h>
// #include "Singly_Linked_List/SLL.h"
// #include "Doubly_Linked_List/DLL.h"
#include "Circular_Linked_List/CLL.h"

// void printList(List *list)
// {
//     Node *temp = list->head;

//     while (temp != NULL)
//     {
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL");
// }

// void printDList(DList *list)
// {
//     Node *temp = list->head;

//     while (temp != NULL)
//     {
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL");
// }

void printCList(CList *list)
{
    Node *temp = list->head;

    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != list->head);
    printf("NULL");
}

// void printCList(CList *list)
// {
//     Node *temp = list->head;
//     for (int i = 0; i < list->size; i++)
//     {
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL");
// }

// void printListReverse(DList *list)
// {
//     Node *temp = list->tail;
// while (temp != NULL)
//     {
//         printf("%d->", temp->data);
//         temp = temp->prev;
//     }
//     printf("NULL");
// }