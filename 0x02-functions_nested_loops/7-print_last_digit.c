#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given number
 * @n: the input
 * Return: The value of the last number
 */
int print_last_digit(int n)
{
	int ldigit;
	
	ldigit = n % 10;
	if (ldigit < 0)
	{
	ldigit = ldigit * -1;
	}
	_putchar(ldigit + '0');
	return (ldigit);
}
