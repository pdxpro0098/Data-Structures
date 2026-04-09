#include "SLL.h"
#include "../LL_Function.c"
#include <stdio.h>

int main()
{
    List *lst = (List *)malloc(sizeof(List));
    List_init(lst);
    insertHead(lst, 12);
    insertHead(lst, 14);
    insertHead(lst, 1);
    insertHead(lst, 4);
    insertHead(lst, 114);
    printList(lst);
    return 0;
}
