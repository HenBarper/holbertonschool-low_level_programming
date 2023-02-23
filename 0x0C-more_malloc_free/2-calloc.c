/*
 * File 2-calloc.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocate mem for an array using malloc
 * @nmemb: us int
 * @size: us int
 * Return: ptr to allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);

			for (i = 0 ; i < (nmemb * size) ; i++)
			{
				*(ar + i) = 0;
			}

	return (ar);
}
