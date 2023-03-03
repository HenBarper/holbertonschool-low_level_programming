/*
 * File: 0-print_name.c
 * Author: Ben Harper
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @*name: ptr to name string
 * @*f: ptr to f function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	void (*printit)(char *);
	printit = f;
	f(name);
}
