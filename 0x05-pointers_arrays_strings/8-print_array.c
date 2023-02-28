#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * @a: pointer
 * @n: input
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
}
