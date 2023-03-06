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
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(prms);
}
