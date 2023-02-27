#include "main.h"

/**
 * _strlen - counts the length of the a string
 * @s: pointer being used
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
