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
		for (int i = 0; i < array->length; i++)
		{
			array->array[i] = array->array[i + 1];
		}
		array->length--;
	}
}

int main()
{
	ARRAY *arr = (ARRAY *)malloc(sizeof(ARRAY));
	initARRAY(arr);
	insert_back(arr, 1);
	insert_back(arr, 2);
	insert_back(arr, 3);
	insert_back(arr, 4);
	insert_back(arr, 5);
	insert_back(arr, 6);
	insert_back(arr, 7);
	printArray(arr);
	printf("\n\n");
	delete_front(arr);
	delete_front(arr);
	printArray(arr);

	return 0;
}
