/*
 * File 9-strcpy.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * *_strcpy - copy a string to buffer point
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
