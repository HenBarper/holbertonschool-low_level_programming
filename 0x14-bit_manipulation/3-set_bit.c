#include "main.h"
#include <stdio.h>

/**
 * set_bit - set the val of bit at index to 1
 * @n: number to use
 * @index: index to take
 * Return: 1 on success or -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	x <<= index;
	*n |= x;
	return (1);
}
