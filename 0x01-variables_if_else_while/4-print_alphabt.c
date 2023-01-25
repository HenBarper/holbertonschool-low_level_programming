/*
 * File 4-print_alphabt.c
 * Auth: Ben Harper
 */

#include <stdio.h>

/**
 * main - Alphabet soup -q & e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if(ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
