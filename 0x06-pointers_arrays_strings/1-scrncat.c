#include "main.h"

/**
 * _strncat - Contenates 2 strings
 * @dest: Ist parameter
 * @src: second parameter
 * @n: maximum no of contenations
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;						
	int x = 0;
	
	while (dest[len])
	{
		len++;
	}


	while (x < n && src[x])
	{
		dest[len] = src[x];
		len++;
		x++;
	}

	dest[len + n + 1] = '/0';

	return (dest);
}
