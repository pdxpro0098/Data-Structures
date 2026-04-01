#include "ARRAY.h"

void ARRAY_print(ARRAY *array)
{
    if (!array)
        return;
    for (int i = 0; i < array->length; i++)
    {
        printf("%d ", array->array[i]);
    }
}

void ARRAY_reverse(ARRAY *array)
{
    for (int i = 0; i < array->length / 2; i++)
    {
        int temp = array->array[i];
        array->array[i] = array->array[array->length - 1 - i];
        array->array[array->length - 1 - i] = temp;
    }
}

void ARRAY_SortASC(ARRAY *array)
{
    for (int j = 0; j < array->length; j++)
    {
        for (int i = 0; i < array->length - j - 1; i++)
        {
            if (array->array[i] > array->array[i + 1])
            {
                int temp = array->array[i];
                array->array[i] = array->array[i + 1];
                array->array[i + 1] = temp;
            }
        }
    }
}

void ARRAY_SortDES(ARRAY *array)
{
}

int ARRAY_maximum(ARRAY array)
{
    int max = array.array[0];
    for (int i = 0; i < array.length; i++)
        if (max < array.array[i])
            max = array.array[i];
    return max;
}

int minimum(ARRAY array)
{
    int min = array.array[0];
    for (int i = 0; i < array.length; i++)
        if (min > array.array[i])
            min = array.array[i];
    return min;
}
