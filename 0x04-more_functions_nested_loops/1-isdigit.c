#include "main.h"

/**
 * _isdigit - check for digits between 0 and 9
 * @c: - input
 * Return: 1 if number is between 0 to 9, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
