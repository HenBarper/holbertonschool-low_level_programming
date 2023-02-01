/*
 * File 3-print_numbers.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_numbers - print 0-9
 * Description: print numbers 0 - 9
 * Return: 0
 */

void print_numbers(void)
{
	int i = '0';

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
