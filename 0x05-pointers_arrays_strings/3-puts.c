/*
 * File 3-puts.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * _puts - print string + new line to "stdout"
 * @str: strin value
 * Return: nothing
 */

void _puts(char *str)
{
	int length = _strlen(*str);
	int i;

	for (i = 0 ; i < length ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
