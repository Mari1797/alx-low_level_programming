#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * eturn: Converted integer
 */
{
	int _atoi(char *s)
	int i = 1;
	int j = 0;

	do {
		if (*s == '-')
			i *= -1;

		else if (*s >= '0' && *s <= '9')
			j = (j * 10) + (*s - '0');

		else if (j > 0)
			break;
	   } while (*s++);
           
           return (i * j);
}
