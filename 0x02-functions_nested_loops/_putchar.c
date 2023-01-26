#include <unistd.h>

/**
 * _putchar - writes the character x to stdout
 * @c: The character to print
 *
 * Return: On Success 1.
 * On error, -1 is retunred, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
