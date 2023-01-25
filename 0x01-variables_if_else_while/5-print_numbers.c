/*
 * File 5-print_numbers.c
 * Auth: Ben Harper
 */

#include <stdio.h>

/**
 * main - Numers 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf(num);
	}
	printf("\n");

	return (0);
}
