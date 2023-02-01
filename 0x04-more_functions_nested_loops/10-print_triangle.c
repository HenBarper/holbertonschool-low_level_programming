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
	int column;
	int spaces;
	int hTags;

	if (size > 0)
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (column = 1 ; column <= size ; column++)
			{
				for (spaces = (size - column) ; spaces > 0 ; spaces--)
				{
					_putchar(' ');
				}
				for (hTags = 1 ; hTags <= size ; hTags++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
