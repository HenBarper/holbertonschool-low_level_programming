/*
 * File 2-strchr.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurance to the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return ('\0');
}
