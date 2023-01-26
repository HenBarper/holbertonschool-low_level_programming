/*
 * File 1-alphabet.c
 * Auth: Ben Harper
 */

#include <stdio.h>
#include "main.h"

/**
 * main - insomnia
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
	return (0);
}
