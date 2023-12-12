#include "search_algos.h"

/**
 * binary_search - do a linear search
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to search for
 * Return: first index of value when located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = size - 1;
	size_t i = 0;
	int midpoint = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (min <= max)
	{
		midpoint = (min + max) / 2;
		printf("Searching in array: ");
		for (i = min; i < max; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[i]);
		printf("\n");
		if (array[midpoint] == value)
		{
			return (midpoint);
		}
		else if (array[midpoint] > value)
		{
			max = midpoint - 1;
		}
		else if (array[midpoint] < value)
		{
			min = midpoint + 1;
		}
	}
	return (-1);
}
