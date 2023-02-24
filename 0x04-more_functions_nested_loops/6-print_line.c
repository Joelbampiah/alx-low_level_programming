#include "main.h"

/**
 * print_line - prints n times of a line
 * @n: the input
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
