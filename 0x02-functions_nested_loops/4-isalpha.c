#include "main.h"

/**
 * _isalpha - Compare characters
 * @c: is the input
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	return (0);
}
