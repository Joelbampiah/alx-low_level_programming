#include <stdio.h>

/**
 * main - Printing letters except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		if (let != 'e' && let != 'q')
		{
			putchar(let);
		}
		let++;
	}
	putchar('\n')
	return (0);
}
