/*
 * File: 2-int_index.c
 * Author: Ben Harper
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - search for int
 * @array: int ptr
 * @size: int
 * @cmp: func ptr
 * Return: index of first non 0 element
 * or -1 for no match or <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
