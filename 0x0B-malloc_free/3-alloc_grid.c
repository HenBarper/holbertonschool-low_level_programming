/*
 * File 3-alloc_grid.c
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - ret ptr to 2d arr of ints
 * @width: arr size x
 * @height: arr size y
 * Return: ptr to 2 arr or NULL
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ar[x] = malloc(sizeof(int) * width);
		if (ar[x] == NULL)
		{
			for (; x >= 0; x--)
				ar(mee[x]);
			free(ar);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ar[x][y] = 0;
	}
	return (ar);
}
