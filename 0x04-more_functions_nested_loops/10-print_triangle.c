/*
 * File 10-print_triangle.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_triangle - something
 * @size: input
 * Description: use hashtags
 * Return: nothing
 */

void print_triangle(int size)
{
	int row;
	int spaces;
	int hTags;

	if (size > 0)
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (spaces = (size - row) ; spaces > 0 ; spaces--)
			{
				_putchar(' ');
			}
			for (hTags = 1 ; hTags <= row ; hTags++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
