/*
 * File 9-times_table.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * times_table - 9x table
 * Description: print 9 times table
 * Return: Always 0
 */

void times_table(void)
{
	int num1;
	int num2;
	int result;

	for (num1 = 0 ; num1 <= 9 ; num1++)
	{
		for (num2 = 0 ; num2 <= 9 ; num2++)
		{
			result = num1 * num2;

			if (result == 0)
			{
				if (num2 > 0)
				{
					_putchar(' ');
				}
				_putchar('0');
			}
			else if (result > 0 && result < 10)
			{
				_putchar(' ');
				_putchar((result) + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');;
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}	
}
