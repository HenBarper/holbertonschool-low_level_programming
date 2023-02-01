/*
 * File 9-fizz_buzz
 * Auth: Ben Harper
 */

#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz
 * Description: Fizz - 3 _ Buzz - 5 _ FizzBuzz 5 & 3
 * Return: 0
 */

int main(void)
{
	int counter;

	for (counter = 1 ; counter < 100 ; counter++)
	{
		if ((counter % 3 == 0) && (counter % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", counter);
		}
	}
	printf("Buzz\n");

	return (0);
}
