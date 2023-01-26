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
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(((n % 10) * -1) + '0');
	}
	
	return (0);
}
