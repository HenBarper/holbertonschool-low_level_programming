/*
 * File: 0-sum_them_all.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum of params
 * @n: number of params
 * Return: result of eq
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list addparams;
	int i;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(addparams, n);

	for (i = 0 ; i < n ; i++)
	{
		result += va_arg(addparams, unsigned int);
	}

	va_end(addparams);
	return (result);
}
