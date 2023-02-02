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
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length >= 0)
	{
		length--;
		_putchar(s[length - 1]);
	}
	_putchar('\n');
}
