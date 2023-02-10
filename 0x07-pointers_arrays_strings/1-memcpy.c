/*
 * File 1-memcpy.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: destination
 * @src:source
 * @n: length
 * Return: a character
 */

char *_memcpy(char *dest, Char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <= n ; i++)
	{
		dest[i] = src[i];
	}
}
