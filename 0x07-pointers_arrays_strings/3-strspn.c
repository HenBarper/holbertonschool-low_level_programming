/*
 * File 3-strspn.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: string
 * @accept: character
 * Return: # of bytes from initial segment
 */

char *_strspn(char *s, char *accept)
{
	int i = 0;
	int counter = 0;
	unsigned int matches = 0;
	int torf;

	while (s[i])
	{
		torf = 0;
		counter = 0;
		while (accept[counter])
		{
			if (torf == 0 && s[i] == accept[counter])
			{
				torf = 1;
				matches++;
			}
			counter++;
		}
		if (torf == 0)
		{
			return (matches);
		}
		i++;
	}
	return (matches);
}
