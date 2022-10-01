#include "main.h"

/**
 * _strncat - Concatenates 2 strings
 * @dest: First parameter
 * @src: Second parameter
 * @n: maximum no of concatenations
 *
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int j = 0;

	while (dest[len])
	{
		len++;
	}

	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len + n + 1] = '\0';

	return (dest);
}
