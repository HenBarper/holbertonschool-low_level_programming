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
	int temp;

	while (c[length] != '\0')
	{
		length++;
	}
	length--;

	for (counter = 0 ; counter < length ; counter++)
	{
		if (((int)c[counter]) > 96 && ((int)c[counter]) < 123)
		{
			temp = ((int)c[counter]) - 32;
			c[counter] = (char)temp;
		}
	}

	return (c);
}
