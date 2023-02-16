/*
 * File 6-is_prime_number.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
int prime_check(int n, int d);

/**
 * is_prime_number - determine is prime
 * @n: num to check
 * Return: 1 if prime or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n < 4)
	{
		return (1);
	}

	return (prime_check(n, 2));
}

/**
 * prime_check - check for prime
 * @n: int
 * @d: divisor
 * Return: the value
 */

int prime_check(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	if (d == n / 2)
	{
		return (1);
	}

	return (prime_check(n, d + 1));
}
