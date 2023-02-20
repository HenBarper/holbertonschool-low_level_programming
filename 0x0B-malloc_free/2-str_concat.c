/*
 * File 2-str_concat.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null or ptr to concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *ar;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		while (s1[s1len] != '\0')
		{
			s1len++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[s2len] != '\0')
		{
			s2len++;
		}
	}
	s2len++;

	ar = malloc((s1len + s2len) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < s1len ; i++)
	{
		ar[i] = s1[i];
	}
	for (i = 0 ; i < s2len ; i++)
	{
		ar[s1len + i] = s2[i];
	}
	return (ar);
}
