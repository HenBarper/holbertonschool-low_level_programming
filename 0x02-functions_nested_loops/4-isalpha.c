/*
 * File 4-isalpha.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check for lower case letters
 * @c: an input character
 * Description: Check that case
 * Return: Nothing.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
