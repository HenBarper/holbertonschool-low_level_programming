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
	char *aux = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (aux);
}
