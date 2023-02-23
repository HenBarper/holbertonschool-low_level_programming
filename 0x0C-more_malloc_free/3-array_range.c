/*
 * File 3-array_range
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - create an arr of ints
 * @min: min size
 * @max: max size
 * Return: ptr to new arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int len;
	int i;

	if (min > max)
		return (NULL);

	len = (max - min);
	arr = malloc((len + 1) * sizeof(int));
	if (arr == NULL)
		return(NULL);
	for (i = 0; i <= len ; i++)
	{
		*(arr + i) = min + i;
	}

	return (arr);
}
