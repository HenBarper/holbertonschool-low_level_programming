/*
 * File 6-cap_string.c
 * Auth: Ben Harper
 */

#include "holberton.h"

/**
 * *cap_string - capitalize all words of string
 * @c: string
 * Return: nothing
 */

char *cap_string(char *c)
{
	int length = 0;
	int counter;
	char prvCh = c[0];

	while (c[length] != '\0')
	{
		length++;
	}

	for (counter = 0 ; counter < length ; counter++)
	{
		if (counter > 0)
		{
			prevCh = c[counter - 1];
		}
		if (prevCh == ',' || prevCh == ';' || prevCh == '.' || prevCh == '!' || prevCh == '"' || prevCh == '(' || prevCh == ')' || prevCh == '{' || prevCh == '}' || prevCh == ' ' || prevCh == '	' || prevCh == '\n')
		{
			if ((c[counter]) > 96 && (c[counter]) < 123)
			{
				c[counter] = (c[counter]) - 32;
			}
		}
	}

	return (c);
}
