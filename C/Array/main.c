#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	int *array;
	int capacity;
	int length;
} ARRAY;

void initARRAY(ARRAY *array)
{
	array->array = (int *)malloc(sizeof(int) * 2);
	array->capacity = 2;
	array->length = 0;
}

void printArray(ARRAY *array)
{
	for (int i = 0; i < array->length; i++)
	{
		printf("%d ", array->array[i]);
	}
}

void push_back(ARRAY *array, int value)
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

void push_front(ARRAY *array, int value)
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

int main()
{
	ARRAY *arr = (ARRAY *)malloc(sizeof(ARRAY));
	initARRAY(arr);
	push_front(arr, 1);
	push_front(arr, 2);
	push_front(arr, 3);
	push_front(arr, 4);
	push_front(arr, 5);
	push_front(arr, 6);
	push_front(arr, 7);
	push_front(arr, 8);

	printArray(arr);

	return 0;
}
