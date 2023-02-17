#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its name
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int res;
	
	if (argc == 0)
	{
		printf("0\n");
	}
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		res = n1 + n2;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
