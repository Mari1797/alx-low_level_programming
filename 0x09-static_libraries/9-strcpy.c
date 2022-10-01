#include "main.h"

/**
 * _strcpy - Copys the string pointed by src
 * @dest: value of destination
 * @src: value of source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}
