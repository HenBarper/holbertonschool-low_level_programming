/*
 * File 1-string_nconcat.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of spaces
 * Return: nulll failure or ptr to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	int i;

	if (s1 == NULL)
		s1 == "";

	while (s1[s1len] != 0)
		s1len++;

	if (s2 == NULL)
		s2 == "";

	while (s2[s2len] != 0)
		s2len++;

	if (n >= s2len)
		n = s2len;

	newstr = malloc(s1len + n + 1);

	if (newstr == NULL)
		return (NULL);

	for (i = 0 ; i < (s1len + n) ; i++)
	{
		if (i < s1len)
		{
			newstr[i] = *s1;
			s1++;
		}
		else
		{
			newstr[i] = *s2;
			s2++;
		}
	}
	newstr[i] = '\0';
	return (newstr);
}
