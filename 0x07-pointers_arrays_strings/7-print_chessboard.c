/*
 * File 7-print_chessboard.c
 * Auth: Ben Harper
 */

#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: string
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0 ; row < 8 ; row++)
	{
		for (col = 0 ; col < 8 ; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
