#include "search_algos.h"

/**
 * linear_search - do a linear search
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to search for
 * Return: first index of value when located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
	{
	    return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf ("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		}
	return (-1);
}