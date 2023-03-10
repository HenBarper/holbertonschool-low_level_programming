/*
 * File 8-print_array.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_array - print n elements of a string + new line to "stdout"
 * @n: input int
 * @a: int pointer
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int length = 0;
	int i;

	while (a[length] != '\0')
	{
		length++;
	}

	if (n < length)
	{
		for (i = 0 ; i < n ; i++)
		{
			printf("%d", a[i]);
			if (i < (n - 1))
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
