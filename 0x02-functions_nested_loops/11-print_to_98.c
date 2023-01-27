/*
 * File 11-print_to_98.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - printing to 98
 * @n: input char
 * Description: from n to 98 up or down
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n <= 98 ; n++)
		{
			printf(n);
			if (n < 98)
			{
				printf(",\ ");
			}
		}
	}
	else
	{
		for (; n >= 98 ; n--)
		{
			printf(n);
			if (n > 98)
			{
				printf(",\ ");
			}
		}
	}
}
