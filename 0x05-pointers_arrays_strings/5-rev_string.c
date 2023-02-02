/*
 * File 5-rev_string.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string value
 * Return: nothing
 */

void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length++;

	char message[length];
	int i;
	int c = 0;

	length--;

	for (i = length ; i <= 0 ; i--)
	{
		message[c] = s[length];
	}

	length++;

	message[length] = '\0';

	int j;

	for (j = 0 ; j <= length ; j++)
	{
		s[j] = message[j];
	}
	_putchar('\n');
}
