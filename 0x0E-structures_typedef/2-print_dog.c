/*
 * File 2-print_dog.c
 * Auth: Ben Harper
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a dog
 * @d: dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
