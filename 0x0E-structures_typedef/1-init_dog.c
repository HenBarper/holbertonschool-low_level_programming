/*
 * File 1-init_dog.c
 * Auth: Ben Harper
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a var of type dog
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Description: Create a new dog with given vars
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
