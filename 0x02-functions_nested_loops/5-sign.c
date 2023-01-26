/*
 * File 5-isalpha.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * print_sign - print sign of number
 * @c: an input character
 * Description: print sign
 * Return: 1, 0, or -1
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (c == 0)
	{
		_putchar("0");
		return (0);
	}
	else
	{
		_putchar("-");
		return (-1);
	}
}
