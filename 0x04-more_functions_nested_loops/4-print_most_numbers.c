/*
 * File 4-print_most_numbers.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_most_numbers - print 0-9 excluding 2 & 4
 * Description: print numbers 0 - 9 not 2 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar((i) + '0');
		}
	}
	_putchar('\n');
}
