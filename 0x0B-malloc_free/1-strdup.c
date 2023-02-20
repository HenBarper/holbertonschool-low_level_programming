/*
 * File 1-strdup.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - ret ptr to newly allocated mem space
 * @str: string
 * Return: NULL or ptr to dupe string
 */

char *_strdup(char *str)
{
	int i = 0;
	int n = 0;
	char *ar;

	while (str[i] != '\0')
	{
		i++;
		n++;
	}
	n++;

	ar = malloc(n * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < n ; i++)
	{
		ar[i] = str[i];
	}

	return (ar);
}
