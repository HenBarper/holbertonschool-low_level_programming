/*
 * File 2-strchr.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * *_strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurance to the character
 */

char *_strchr(char *s, char c);
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return ('\0');
}
