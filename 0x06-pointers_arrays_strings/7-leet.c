/*
 * File 7-leet.c
 * Auth: Ben Harper
 */

#include "holberton.h"

/**
 * *leet - convert to l33t
 * @s: char array
 * Return: char
 */

char *leet(char *s)
{
	int index = 0;
	int counter;
	char l33t_ch[10] = { '4', '4', '3', '3', '0', '0', '7', '7', '1', '1' };
	char reg_ch[10] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };

	while (s[index])
	{
		for (counter = 0 ; counter < 10 ; counter++)
		{
			if (s[index] == reg_ch[counter])
			{
				s[index] = l33t_ch[counter];
			}
		}
		index++;
	}

	return (s);
}
