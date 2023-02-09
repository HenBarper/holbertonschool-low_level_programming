#include <unistd.h>

/**
 * _strlen - counts length of string
 * @s: input char
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
