/*
 * File 4-rev_array.c
 * Auth: Ben Harper
 */

#include "holberton.h"

/**
 * reverse_array - reverse array of ints
 * @a: int array
 * @n: number or ints in array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp;
	int counter;

	for (counter = 0 ; counter < n ; counter++)
	{
		temp = a[n - 1];
		a[n - 1] = a[counter];
		a[counter] = temp;
		n--;
	}
}
