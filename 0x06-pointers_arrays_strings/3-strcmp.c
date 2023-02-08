/*
 * File 3-strcmp.c
 * Auth: Ben Harper
 */

#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: -1, 0, or 1 if s1 is less than, equal to, or greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int s1Length = 0;
	int s2Length = 0;

	while (s1[s1Length] != '\0')
	{
		s1Length++;
	}
	s1Length--;

	while (s2[s2Length] != '\0')
	{
		s2Length++;
	}
	s2Length--;

	if (s1Length < s2Length)
	{
		return (-1);
	}
	else if (s1Length == s2Length)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
