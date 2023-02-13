/*
 * File 8-print_diagsums.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of 2 diagonals of a square matrix of ints
 * @a: array
 * @size: int
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int maxSize;
	int sum1 = 0;
	int sum2 = 0;

	maxSize = size * size;

	for (i = 0 ; i < maxSize ; i += size + 1)
	{
		sum1 += a[i];
	}

	for (i = size - 1 ; i < maxSize - 1 ; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
