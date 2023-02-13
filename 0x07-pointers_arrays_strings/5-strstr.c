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
	int start = 0;
	int torf = 0;

	while(haystack[hay_counter])
	{
		if (haystack[hay_counter] == needle[needle_counter])
		{
			if(torf == 0)
			{
				torf = 1;
				start = hay_counter;
			}
			needle_counter++;
		}
		else
		{
			torf = 0;
			start = 0;
		}
		hay_counter++;
	}
	hay_counter--;
	return (&haystack[start]);
}
