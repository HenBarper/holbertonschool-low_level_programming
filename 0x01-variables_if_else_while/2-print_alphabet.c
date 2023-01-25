/*
 * File 2-print_alphabet.c
 * Auth: Ben Harper
 */

#include <stdio.h>

/**
 * main - I sometimes suffer from insomnia
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
