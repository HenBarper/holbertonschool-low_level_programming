/*
 * File 8-print_square
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_square - print squares of hashtags
 * @size: input
 * Description: use hashtags
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
