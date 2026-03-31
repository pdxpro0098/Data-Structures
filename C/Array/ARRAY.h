#include <stdlib.h>
#include <stdio.h>

#include "../UTILITY.c"

typedef struct
{
    int *array;
    int capacity;
    int length;
} ARRAY;

// Prototypes from ARRAY.c
void ARRAY_init(ARRAY *array);
int ARRAY_Size(ARRAY *array);
void insert_back(ARRAY *array, int value);
void insert_front(ARRAY *array, int value);
void delete_back(ARRAY *array);
void delete_front(ARRAY *array);
int insert_At(ARRAY *array, int index, int value);
int delete_At(ARRAY *array, int index);

// Prototypes from ARRAY_FUNCTIONS.c
void ARRAY_print(ARRAY *array);
void ARRAY_reverse(ARRAY *array);
void ARRAY_SortASC(ARRAY *array);
void ARRAY_SortDES(ARRAY *array);
