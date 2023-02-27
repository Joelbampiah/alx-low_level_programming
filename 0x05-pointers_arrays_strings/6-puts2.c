#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the pointer 
 */
void puts(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		length++;
	}
}
