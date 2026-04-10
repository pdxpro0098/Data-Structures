#include "SLL.h"
#include "../LL_Function.c"
#include <stdio.h>

int main()
{
    List *lst = (List *)malloc(sizeof(List));
    List_init(lst);
    insertHead(lst, 1);
    insertHead(lst, 2);
    insertHead(lst, 3);
    insertHead(lst, 4);
    insertHead(lst, 5);
    insertHead(lst, 6);
    insertHead(lst, 7);
        
    printList(lst);
    return 0;
}
