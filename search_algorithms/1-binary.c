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
	size_t max = size;
	size_t i = 0;
	int midpoint = 0;
	/*int counter = 0;*/

	if (array == NULL || size == 0)
		return (-1);

    while (min <= max)
	{
		midpoint = (min + max) / 2; /*((max - min) / 2) + min;*/
		printf("midpoint: %d\n", midpoint);
		printf("Checking array index %d (%d), for %d\n", midpoint, array[midpoint], value);
		printf("Searching in array: ");
		for (i = min; i < max - 1; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[i]);
		printf("\n");
		if(array[midpoint] == value)
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
		printf("min: %ld\n", min);
		printf("max: %ld\n", max);
	}
	return (-1);
}
