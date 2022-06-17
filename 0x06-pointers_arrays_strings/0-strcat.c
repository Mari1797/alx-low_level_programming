#include "main.h"
#include <stdio.h>

/**
 * _strcat - Contenate 2 strings
 * @dest: The destination string
 * @src: The source string*
 * Return: A pointer resulting to a string
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

	dest[len] = '\0';
	return (dest);
}
