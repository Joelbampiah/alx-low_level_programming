#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int print_alphabet(void)
{

	char abcd;

	for (abcd = 'a'; abcd <= 'z'; abcd++)
	{
		_putchar(abcd);
	}
	_putchar('\n');
	return (0);
}
