/*
 * File 7-print_diagonal.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_diagonal - print slashes diagonally
 * @n: print line of length n
 * Description: use slashes
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
