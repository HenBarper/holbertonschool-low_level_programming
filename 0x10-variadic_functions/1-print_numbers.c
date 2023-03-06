/*
 * File: 1-print_numbers.c
 * Auth: Ben Harper
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print nums + new line
 * @n: number of params
 * @...: other params
 * @separator: print between nums
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prms;
	unsigned int i;
	int num;

	va_start(prms, n);

	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(prms, int);
		if (separator != NULL && i < (n - 1))
		{
			printf("%d%s", num, separator);
		}
		else if (separator == NULL && i < (n - 1))
		{
			printf("%d ", num);
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");

	va_end(prms);
}
