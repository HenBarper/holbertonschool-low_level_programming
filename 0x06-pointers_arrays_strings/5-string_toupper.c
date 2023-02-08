/*
 * File 5-string_toupper.c
 * Auth: Ben Harper
 */

#include "holberton.h"

/**
 * *string_toupper - change lowercase letter of string to uppercase
 * @c: string
 * Return: nothing
 */

char *string_toupper(char *c)
{
	int length = 0;
	int counter;

	while (c[length] != '\0')
	{
		length++;
	}

	for (counter = 0 ; counter < length ; counter++)
	{
		if ((c[counter]) > 96 && (c[counter]) < 123)
		{
			c[counter] = (c[counter]) - 32;
		}
	}

	return (c);
}
