/*
 * File 3-islower.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * _islower - check for lower case letters
 * Description: Check that case
 * Return: Nothing.
 */

int _isLower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
