/*
 * File 3-factorial.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of number
 * @n: number
 * Return: fact of number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
