/*
 * File 7-puts_half.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * puts_half - print half of a string + new line to "stdout"
 * @str: string value
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2 ; i < length ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((length / 2) + 1) ; i < length ; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
