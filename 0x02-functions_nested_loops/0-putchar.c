#include <stdio.h>
#include "holberton.h"

/**
 * main - Printing _putchar followed by new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *pu = "_putchar";

	while (*pu)
	{
		_putchar(*pu);
		pu++;
	}
	_putchar('\n');

	return (0);
}
