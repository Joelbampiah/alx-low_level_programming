#include "main.h"

/**
 * print_alphabet - prints the lower case alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void) 
{
	char abcd;

	for (abcd = 'a'; abcd <= 'z'; abcd++)
	{
		_putchar(abcd);
	}
	_putchar('\n');
}
