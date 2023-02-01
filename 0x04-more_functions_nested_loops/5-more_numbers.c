/*
 * File 5-more_numbers.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 * Description: print 0-14 x10
 * Return: 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0 ; i <= 14 ; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
