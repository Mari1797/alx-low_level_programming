#include "main.h"
#include <stdio.h>

/**
 * _strcat - Contenate 2 strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len = i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len]  = src[i];
		len++;
	}

	dest[len] = src[i];
	return (dest);
}
