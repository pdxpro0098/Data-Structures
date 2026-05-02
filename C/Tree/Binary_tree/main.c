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
    insert(t, 6);
    insert(t, 7);
    insert(t, 8);
    insert(t, 9);
    insert(t, 10);
    delete(t);
    preOrder(t);

    return 0;
}