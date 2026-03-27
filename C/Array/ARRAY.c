#include <stdlib.h>
#include <stdio.h>
#include "ARRAY.h"

void ARRAY_init(ARRAY *array)
{
	array->array = (int *)malloc(sizeof(int) * 2);
	array->capacity = 2;
	array->length = 0;
}

void ARRAY_print(ARRAY *array)
{
	for (int i = 0; i < array->length; i++)
	{
		printf("%d ", array->array[i]);
	}
}

int ARRAY_Size(ARRAY *array)
{
	return array->length;
}

void insert_back(ARRAY *array, int value)
{
	if (array->capacity == array->length)
	{
		array->array = realloc(array->array, sizeof(int) * (array->capacity + 2));
		array->capacity += 2;
		array->array[array->length++] = value;
	}
	else
	{
		array->array[array->length++] = value;
	}
}

void insert_front(ARRAY *array, int value)
{
	if (array->capacity == array->length)
	{
		array->array = realloc(array->array, sizeof(int) * (array->capacity + 2));
		array->capacity += 2;
	}

	for (int i = array->length; i > 0; i--)
	{
		array->array[i] = array->array[i - 1];
	}

	array->array[0] = value;
	array->length++;
}

void delete_back(ARRAY *array)
{
	if (array->length != 0)
	{
		array->length--;
	}
}

void delete_front(ARRAY *array)
{
	if (array->length != 0)
	{
		for (int i = 0; i < array->length - 1; i++)
		{
			array->array[i] = array->array[i + 1];
		}
		array->length--;
	}
}

void insert_At(ARRAY *array, int index, int value)
{
	if (index > array->length || index < 0)
	{
		printf("Insertion Index out of range");
		return;
	}

	if (array->capacity == array->length)
	{
		array->array = realloc(array->array, sizeof(int) * (array->capacity + 2));
		array->capacity += 2;
	}
	for (int i = array->length; i > index; i--)
	{
		array->array[i] = array->array[i - 1];
	}
	array->array[index] = value;
	array->length++;
}

void delete_At(ARRAY *array, int index)
{
	if (index >= array->length || index < 0)
	{
		printf("Insertion Index out of range");
		return;
	}

	for (int i = index; i < array->length - 1; i++)
	{
		array->array[i] = array->array[i + 1];
	}
	array->length--;
}

int main()
{
	ARRAY *arr = (ARRAY *)malloc(sizeof(ARRAY));
	ARRAY_init(arr);
	insert_back(arr, 1);
	insert_back(arr, 20);
	insert_back(arr, -3);
	insert_back(arr, 4);
	insert_back(arr, 5);
	insert_back(arr, 16);
	insert_back(arr, 73);
	insert_back(arr, 3);

	// ARRAY_reverse(arr);
	ARRAY_SortASC(arr);
	ARRAY_print(arr);

	return 0;
}
