/*
 * File: 3-print_all.c
 * Auth: Ben Harper
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print all +  new line
 * @format: data type
 * @...: other params
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *temp;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				temp = va_arg(ap, char*);
				if (temp == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", temp);
				}
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(ap);
}
