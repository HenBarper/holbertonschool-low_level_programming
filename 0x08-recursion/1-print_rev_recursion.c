/*
 * File 1-print_rev_recursion.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in rev followed by nl
 * @s: string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
