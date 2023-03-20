#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the val of a bit @ index to 0
 * @n: number to use
 * @index: index to take
 * Return: 1 on success or -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(long) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
