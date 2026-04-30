#include "BTREE.h"

int main()
{
    BTREE *t = (BTREE *)malloc(sizeof(BTREE));
    initBTREE(t);
    insert(t, 1);
    insert(t, 2);
    insert(t, 3);
    insert(t, 4);
    insert(t, 5);
    // preOrder(t);
    printf(" height = %d", BTREE_Height(t));

    return 0;
}