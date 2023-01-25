/*
 * File 3-print_alphabets.c
 * Auth: Ben Harper
 */

#include <stdio.h>

/**
 * main - alphABET
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
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
