/*
 * File 9-print_comb.c
 * Auth: Ben Harper
 */

#include <stdio.h>

/**
 * main - Patience, persistence, and perspiration
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
