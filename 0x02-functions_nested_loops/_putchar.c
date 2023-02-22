#include <unistd.h>

/**
 * _putchar - writes the characters in C to the standard output
 * @c: The characher to be printed
 * Return: 1 (Success)
 * On err, -1 is returned, and error number is indicated
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
