/*
 * File 6-print_numberz.c
 * Auth: Ben Harper
 */

#include <stdio.h>

/**
 * main - Numberz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
