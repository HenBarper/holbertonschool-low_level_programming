/*
 * File 7-print_last_digit.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last dig of num
 * @n: a variable number
 * Description: last digit
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x >= 0)
	{
		_putchar(x + '0');
		return (x);
	}
	else
	{
		_putchar((x + '0') * -1);
		return (x * -1);
	}
}
