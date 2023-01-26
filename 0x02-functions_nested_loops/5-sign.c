/*
 * File 5-isalpha.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * print_sign - print sign of number
 * @n: an input character
 * Description: print sign
 * Return: 1, 0, or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
