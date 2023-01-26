/*
 * File 7-print_tebahpla.c
 * Auth: Ben Harper
 */

#include <stdio.h>

/**
 * main - Smile in the mirror
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
