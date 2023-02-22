#include "main.h"

/**
 * print_alphabet_x10 - Prints lower case alphabets 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char abcd;
	int i = 0;

	while (i < 10)
	{
	for (abcd = 'a'; abcd <= 'z'; abcd++)
	{
	_putchar(abcd);
	}
	_putchar('\n');
	i++;
	}
}
