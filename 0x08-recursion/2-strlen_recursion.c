/*
 * File 2-strlen.recursion.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
