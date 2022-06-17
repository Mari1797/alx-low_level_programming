#include "main.h"

/**
 * _strncat - contenates 2 string
 * @dest: destination value
 * @src: source value
 * @n: maximum no of catenations
 *
 * Return: A pointer resulting to a string
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
