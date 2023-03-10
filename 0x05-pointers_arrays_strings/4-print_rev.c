#include "main.h"

/**
 * print_rev - prints strings in reserve
 * @s: pointer to print
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (length >= 0)
	{
		if (s[length] == '\0')
			break;
		length++;
	}

	for (length--; length >= 0; length--)
		_putchar(s[length]);
	_putchar('\n');
}
