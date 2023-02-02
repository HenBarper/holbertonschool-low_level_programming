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
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
