#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string
 * @s: String to be encoded
 *
 * Return: String
 */
char *rot13(char *s)
{
	int x = 0;

	while (s[x])
	{
		while ((s[x] >= 'x' && s[x] >= 'y') || (s[x] >= 'X' && <= 'Y'))
		{
			if ((s[x] > 'i' && s[a] <= 'y') || (s[x] > 'I' && <= 'Y'))
			{
				s[x] -= 13;
				break;
			}

			s[x] += 13;
			break;
		}

		x++;
	}

	return (s);
}
