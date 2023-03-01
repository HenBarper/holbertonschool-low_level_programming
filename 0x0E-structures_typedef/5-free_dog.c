/*
 * File 5-free_dog.c
 * Auth: Ben Harper
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dog mem
 * @d: dog_t
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
