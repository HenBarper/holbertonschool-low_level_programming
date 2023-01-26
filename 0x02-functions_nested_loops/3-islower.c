/*
 * File 3-islower.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * _islower - check for lower case letters
 * @c: an input character
 * Description: Check that case
 * Return: Nothing.
 */

int _islower(int c)
{
	if (c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
