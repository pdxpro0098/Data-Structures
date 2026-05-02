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

    Node *temp = search(t, 12);
    printf("%d", temp==NULL);
    return 0;
}