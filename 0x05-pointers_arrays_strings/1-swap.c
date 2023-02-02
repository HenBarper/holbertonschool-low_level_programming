/*
 * File 1-swap.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * swap_int - swap two int values
 * @a: value 1
 * @b: value 2
 * Return: nothing it's void
 */

void swap_int(int *a, int *b)
{
	int holder;
	
	holder = *a;
	*a = *b;
	*b = holder;	
}
