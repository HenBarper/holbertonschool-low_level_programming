/*
 * File: 1-array_iterator
 * Author: Ben Harper
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - execute a func as param on els of arr
 * @array: int ptr
 * @size: size_t
 * @action: func ptr
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
