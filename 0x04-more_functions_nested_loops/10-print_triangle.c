/*
 * File 10-print_triangle.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_triangle - 
 * @size: input
 * Description: use hashtags
 * Return: nothing
 */

void print_triangle(int n)
{
	int row;
	int column;
	int spaces;
	int hTags;

	if (n > 0)
	{
		for (row = 1 ; row <= n ; row++)
		{
			for (column = 1 ; column <= n ; column++)
			{
				for (spaces = (n - column) ; spaces > 0 ; spaces--)
				{
					_putchar(' ');
				}
				for (hTags = 1 ; hTags <= n ; hTags++)
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
