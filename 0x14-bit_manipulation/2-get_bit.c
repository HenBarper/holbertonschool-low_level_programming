#include "main.h"
#include <stdio.h>

/**
 * get_bit - return value of bit at index
 * @n: number to pull from
 * @index: index to take
 * Return: the val of the int at index or -1 on fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);


	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
