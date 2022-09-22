#include "main.h"

/**
 * _strcmp - Compares pointers to 2 strings
 * @s1: Pointer to the first string
 * @s2: Pointer to second string
 *
 * Return: 0 if s1 = s2, negative diff if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 < *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
