/*
 * File 0-isupper.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * _isupper - check is upper
 * @c: input char
 * Description: check if char is upper case
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
