#include "main.h"
#include <stdio.h>

/**
 * main - print its name
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		i++;
		/*if (argv[0])
		{
			printf("%d\n", i);
		}*/
	}
	if (argv[0])
	{
		printf("%d\n", i);
	}
	return (0);
}
