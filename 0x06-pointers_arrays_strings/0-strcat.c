#include "main.h"

/**
 * *_strcat - concatenate two given strings
 * @dest: first string given
 * @src: second string given
 *
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++
	}

	dest[i] = '\0';
	return (dest);
}
