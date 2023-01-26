/*
 * File 1-alphabet.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Insomnia
 * Description: Prints alphabet then new line
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
}
