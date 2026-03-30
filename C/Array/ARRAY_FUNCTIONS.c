#include "ARRAY.h"

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
    if (!array || array->length <= 1)
        return;

    int stack[array->length];
    int top = -1;

    // push initial range
    stack[++top] = 0;
    stack[++top] = array->length - 1;

    while (top >= 0)
    {
        int high = stack[top--];
        int low = stack[top--];

        while (low < high)
        {
            int i = low, j = high;
            int pivot = array->array[(low + high) / 2];

            while (i <= j)
            {
                while (array->array[i] > pivot)
                    i++; // DESC
                while (array->array[j] < pivot)
                    j--; // DESC

                if (i <= j)
                {
                    int temp = array->array[i];
                    array->array[i] = array->array[j];
                    array->array[j] = temp;
                    i++;
                    j--;
                }
            }

            // process smaller partition first (stack optimization)
            if (j - low < high - i)
            {
                if (i < high)
                {
                    stack[++top] = i;
                    stack[++top] = high;
                }
                high = j;
            }
            else
            {
                if (low < j)
                {
                    stack[++top] = low;
                    stack[++top] = j;
                }
                low = i;
            }
        }
    }
}