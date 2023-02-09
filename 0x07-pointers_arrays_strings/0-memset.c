/*
 * File 0-memset.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: string
 * @b: char
 * @n: int
 * Return: a character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
