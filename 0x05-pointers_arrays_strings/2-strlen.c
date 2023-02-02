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
	char message = *s;
	char letter;
	int letter_num = 0;

	for (letter = message[letter_num] ; letter != '\0' ; letter = message[letter_num])
	{
		letter_num++;
	}

	return (letter_num);
}
