/*
 * File 6-puts2.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * puts2 - print every other char of a string + new line to "stdout"
 * @str: string value
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
