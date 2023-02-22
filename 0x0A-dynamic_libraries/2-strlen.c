/*
 * File 2-strlen.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * _strlen - return string length
 * @s: char value
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
