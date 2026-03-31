#include "ARRAY.h"

int main()
{
    ARRAY *arr = (ARRAY *)malloc(sizeof(ARRAY));
    ARRAY_init(arr);
    insert_back(arr, 1);
    insert_back(arr, 2);
    insert_back(arr, 3);
    insert_back(arr, 4);
    insert_back(arr, 5);
    ARRAY_print(arr);
    ARRAY_free(arr);
    return 0;
}
