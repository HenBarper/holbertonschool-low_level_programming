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
	int iw = 0;
	int ih = 0;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	ar = (int **)malloc(sizeof(int *) * height);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (ih = 0; ih < height ; ih++)
	{
		ar[ih] = (int *)malloc(sizeof(int) * width);
		if (ar[ih] == NULL)
		{
			free(ar);
			return (NULL);
		}
	}
	for (ih = 0 ; ih < height ; ih++)
	{
		for (iw = 0 ; iw < width ; iw++)
		{
			ar[ih][iw] = 0;
		}
	}
	return (ar);
}
