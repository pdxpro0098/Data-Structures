#include <stdio.h>
#include "DLL.h"
#include "../LL_Function.c"

int main()
{
    DList *lst = (DList *)malloc(sizeof(DList));
    DList_init(lst);
    insertTail(lst, 1);
    insertTail(lst, 2);
    insertTail(lst, 3);
    insertTail(lst, 4);
    insertTail(lst, 5);
    insertTail(lst, 6);
    insertTail(lst, 7);
    insertTail(lst, 8);
    insertTail(lst, 9);
    // deleteHead(lst);
    printListReverse(lst);
    // printList(lst);
    return 0;
}
