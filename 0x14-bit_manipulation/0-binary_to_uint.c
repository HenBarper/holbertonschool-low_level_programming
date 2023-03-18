#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary # to uint
 * @b: ptr to string of 0s and 1s
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int base = 1, result = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return  (result);
}
