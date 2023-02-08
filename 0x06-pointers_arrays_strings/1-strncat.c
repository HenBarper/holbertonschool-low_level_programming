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
	int src_length;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for (src_length = 0 ; src_length < n && src[src_length] != '\0' ; src_length++)
	{
		dest[dest_length + src_length] = src[src_length];
	}
	dest[dest_length + src_length] = '\0';

	return (dest);
}
