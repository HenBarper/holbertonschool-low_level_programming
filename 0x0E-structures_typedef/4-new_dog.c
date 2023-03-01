/*
 * File 4-new_dog.c
 * Auth: Ben Harper
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dog_t *new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}
