#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Return the # of bits needed to flip from one number to another
 * @n: number 1
 * @m: number 2
 * Return: us int amount of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	int i = 0;

	t = n ^ m;
	while (t >= 1)
	{
		if ((t & 1) == 1)
			i++;
		t >>= 1;
	}
	return (i);
}
