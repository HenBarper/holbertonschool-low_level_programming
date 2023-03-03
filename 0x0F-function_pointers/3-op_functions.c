#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add ints
 * @a: int 1
 * @b: int 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub ints
 * @a: int 1
 * @b: int 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mult ints
 * @a: int 1
 * @b: int 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div ints
 * @a: int 1
 * @b: int 2
 * Return: result of div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - mod ints
 * @a: int 1
 * @b: int 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
