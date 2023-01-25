/*
 * File 1-last_digit.c
 * Auth: Ben Harper
 */

#include <stdio.h>

#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - The last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	string theMessage = "";
	int lastDigit = n % 10;
	if (lastDigit > 5)
	{
		theMessage = "and is greater than 5"; 
	}
	else if (lastDigit == 0)
	{
		theMessage = "and is 0";
	}
	else
	{
		theMessage = "and is less than 6 and not 0";
	}
	printf("Last digit of %d is %d %s\n", n, lastDigit, theMessage);
	return (0);
}
