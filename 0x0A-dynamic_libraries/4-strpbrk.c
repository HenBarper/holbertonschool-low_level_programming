/*
 * File 4-strpbrk.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: a ptr to the byte in s that matches 1 of the bytes in accpt or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int counter = 0;

	while (s[i])
	{
		counter = 0;
		while (accept[counter])
		{
			if (s[i] == accept[counter])
			{
				return (&s[i]);
			}
			counter++;
		}
		i++;
	}
	return ('\0');
}
