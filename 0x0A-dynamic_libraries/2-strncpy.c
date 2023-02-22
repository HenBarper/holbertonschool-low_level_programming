/*
 * File 2-strncpy.c
 * Auth: Ben Harper
 */

#include "holberton.h"

/**
 * *_strncpy - work like strncpy
 * @dest: destination value
 * @src: source value
 * @n: int var
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*int dest_length = 0;*/
	int src_len;

	/*
	 * while (dest[dest_length] != '\0')
	 * {
	 *	dest_length++;
	 * }
	 */

	for (src_len = 0 ; src_len < n && src[src_len] != '\0' ; src_len++)
	{
		dest[src_len] = src[src_len];
	}
	for ( ; src_len < n ; src_len++)
	{
		dest[src_len] = '\0';
	}

	return (dest);
}
