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
	char *new_name;
	char *new_owner;
	int name_len = 0;
	int owner_len = 0;
	int i;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_name = malloc(name_len + 1);
	if (new_name == NULL)
		return (NULL);
	for (i = 0 ; name[i] ; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';

	new_owner = malloc(owner_len + 1);
	if (new_owner == NULL)
		return (NULL);
	for (i = 0 ; owner[i] ; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';

	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}
