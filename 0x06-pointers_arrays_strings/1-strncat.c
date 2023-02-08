/*
 * File 1-strncat.c
 * Auth: Ben Harper
 */

#include "holberton.h"

/**
 * *_strncat - concatenate two strings
 * @dest: destination value
 * @src: source value
 * @n: int var
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_len;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for (src_len = 0 ; src_len < n && src[src_len] != '\0' ; src_len++)
	{
		dest[dest_length + src_len] = src[src_len];
	}
	dest[dest_length + src_len] = '\0';

	return (dest);
}
