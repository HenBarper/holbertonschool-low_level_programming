#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary rep of number
 * @n: number to make binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
