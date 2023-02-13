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
	int hay_counter = 0;
	int needle_counter = 0;
	int needle_length = 0;
	int start = 0;
	int torf = 0;

	while (needle[needle_length] != '\0')
	{
		needle_length++;
	}
	while (haystack[hay_counter])
	{
		if (haystack[hay_counter] == needle[needle_counter]
				&& needle[needle_counter] != '\0')
		{
			if (torf == 0)
			{
				torf = 1;
				start = hay_counter;
			}
			needle_counter++;
		}
		else if (haystack[hay_counter] == needle[needle_counter - 1]
				&& needle[needle_counter] != '\0')
		{
			start = hay_counter;
		}
		else if (haystack[hay_counter] != needle[needle_counter]
				&& needle_counter != needle_length)
		{
			torf = 0;
			start = 0;
		}
		hay_counter++;
	}
	hay_counter--;
	if (torf == 0)
		return ('\0');
	else
		return (&haystack[start]);
}
