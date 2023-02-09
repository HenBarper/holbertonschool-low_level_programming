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
	int length;
	int counter;
	int i;
	int torf = 0;
	char prevCh = c[0];
	char sps[7] = { ' ', '\t', '\n', ',', ';', '.', '!' };
	char sps2[6] = { '?', '"', '(', ')', '{', '}'};

	while (c[length] != '\0')
	{
		length++;
	}
	length--;
	for (counter = 0 ; counter < length ; counter++)
	{
		torf = 0;
		if (counter > 0)
		{
			prevCh = c[counter - 1];
		}
		for (i = 0 ; i < 7 ; i++)
		{
			if (prevCh == sps[i])
				torf = 1;
		}
		for (i = 0 ; i < 6 ; i++)
		{
			if (prevCh == sps2[i])
				torf = 1;
		}
		if (torf == 1)
		{
			if ((c[counter]) > 96 && (c[counter]) < 123)
			{
				c[counter] = (c[counter]) - 32;
			}
		}
	}

	return (c);
}
