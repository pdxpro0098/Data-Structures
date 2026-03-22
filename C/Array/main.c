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

int main()
{
	ARRAY *arr;
	initARRAY(arr);
	push_back(arr, 900);
	push_back(arr, 10);
	printArray(arr);

	return 0;
}
