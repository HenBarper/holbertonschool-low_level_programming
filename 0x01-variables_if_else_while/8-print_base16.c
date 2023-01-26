/*
 * File 8-print_base16.c
 * Auth: Ben Harper
 */

#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'F' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
