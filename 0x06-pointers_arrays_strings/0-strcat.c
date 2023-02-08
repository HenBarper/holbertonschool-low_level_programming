/*
 * File 0-strcat.c
 * Auth: Ben Harper
 */

#include "holberton.h"

/**
 * *_strcat - concatenate two strings
 * @dest: destination value
 * @src: source value
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length;
	int src_length;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for (src_length = 0 ; src[src_length] != '\0' ; src_length++)
	{
		dest[dest_length] = src[src_length];
		dest_length++;
	}

	return (dest);
}
