/*
 * File 5-strstr.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: string
 * @needle: string
 * Return: A ptr to the begin of the substring or null if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
