/*
 * File 6-abs.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * _abs - print sign of number
 * @n: a variable number
 * Description: absolute value
 * Return: 1, 0, or -1
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
