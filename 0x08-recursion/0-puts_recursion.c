/*
 * File 0-puts_recursion.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string followed by new line
 * @s: string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
