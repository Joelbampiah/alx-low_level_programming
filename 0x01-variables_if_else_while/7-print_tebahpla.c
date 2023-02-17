#include <stdio.h>

/**
 * main - printing lower case alphabets in reserve order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ba;

	for (ba = 'z'; ba <= 'a'; ba--)
	{
		putchar(ba);
	}
	putchar('\n');
	return (0);
}
