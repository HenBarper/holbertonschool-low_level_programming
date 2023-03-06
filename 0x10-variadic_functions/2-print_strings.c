/*
 * File: 2-print_strings.c
 * Auth: Ben Harper
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings +  new line
 * @n: number of params
 * @...: other params
 * @separator: print between nums
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prms;
	unsigned int i;
	char *str;

	va_start(prms, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(prms, char*);
		if (str == NULL)
			str = "(nil)";

		if (separator != NULL && i < (n - 1))
		{
			printf("%s%s", str, separator);
		}
		else if (separator == NULL && i < (n - 1))
		{
			printf("%s ", str);
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");

	va_end(prms);
}
