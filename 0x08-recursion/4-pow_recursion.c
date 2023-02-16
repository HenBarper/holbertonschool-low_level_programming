/*
 * File 4-pow_recursion.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return x to pow of y
 * @x: int
 * @y: power int
 * Return: the power value
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
