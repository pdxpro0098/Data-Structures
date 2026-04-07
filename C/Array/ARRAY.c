#include "ARRAY.h"

void ARRAY_init(ARRAY *array)
{
	array->array = (int *)malloc(sizeof(int) * 2);
	array->capacity = 2;
	array->length = 0;
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

int insert_At(ARRAY *array, int index, int value)
{
	if (index > array->length || index < 0)
	{
		return 0;
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
	return 1;
}

int delete_At(ARRAY *array, int index)
{
	if (index >= array->length || index < 0)
	{
		return 0;
	}

	for (int i = index; i < array->length - 1; i++)
	{
		array->array[i] = array->array[i + 1];
	}
	array->length--;
	return 1;
}

void ARRAY_empty(ARRAY *array)
{
	for (int i = 0; i < array->length; i++)
	{
		array->array[i] = 0;
	}
}

void ARRAY_free(ARRAY *array)
{
	free(array->array);
	free(array);
}
