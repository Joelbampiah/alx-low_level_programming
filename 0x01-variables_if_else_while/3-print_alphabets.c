#include <stdio.h>

/**
 * main - prints lower case alphabets followed by upper cases
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char abAB;
	
	for (abAB = 'a'; abAB <= 'z'; abAB++)
		putchar(abAB);
	for (abAB = 'A'; abAB <= 'Z'; abAB++)
		putchar(abAB);
	putchar('\n');
	return(0);
}
