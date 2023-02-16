/*
 * File 5-sqrt_recursion.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
int sqrt_check(int n, int f);

/**
 * _sqrt_recursion - return natural square root of n
 * @n: int
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1 + _sqrt_recursion(n - 1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (sqrt_check(n, 1));
}

/**
 * sqrt_check - increments a counter to check for matches
 * @n: number
 * @f: factor
 * Return: the power value
 */

int sqrt_check(int n, int f)
{
	if (f * f == n)
	{
		return (f);
	}
	else if (f > n)
	{
		return (-1);
	}
	else
	{
		sqrt_check(n, f + 1);
	}
}
