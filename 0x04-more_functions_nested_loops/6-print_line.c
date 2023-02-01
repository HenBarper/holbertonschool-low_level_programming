/*
 * File 6-print_line.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_line - print a line
 * @n: print line of length n
 * Description: use underscores
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
