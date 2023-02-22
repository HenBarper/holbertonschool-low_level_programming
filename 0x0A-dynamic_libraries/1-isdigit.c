/*
 * File 1-isdigit.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * _isdigit - check is digit
 * @c: input char
 * Description: check if char is a digit
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
