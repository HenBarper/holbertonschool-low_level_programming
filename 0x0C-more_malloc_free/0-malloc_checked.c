/*
 * File 0-malloc_checked.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory using malloc
 * @b: unsigned int
 * Return: ptr to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(sizeof(unsigned int) * b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
