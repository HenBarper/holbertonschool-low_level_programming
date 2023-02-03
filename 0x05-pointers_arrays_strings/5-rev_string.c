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
	int counter;
	char letter;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (counter = 0 ; counter < length ; counter++)
	{
		letter = s[length];
		s[length] = s[counter];
		s[counter] = letter;
		length--;
	}

	_putchar('\n');
}
