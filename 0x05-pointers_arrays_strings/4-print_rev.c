/*
 * File 4-print_rev.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_rev - print string in reverse + new line
 * @s: string value
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length ; i > 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
