#include <stdio.h>
#include "DLL.h";

int main()
{
    DList *lst = (DList *)malloc(sizeof(DList));
    DList_init(lst);
    return 0;
}
