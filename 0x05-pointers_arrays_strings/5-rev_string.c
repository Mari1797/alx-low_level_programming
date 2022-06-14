#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int x;
	int y;
	int z;
	char *a;
	char t;

	a = s;
	while (s[y] != '\0')
	{
		y++;
	}

	for (z = 1; z < y; z++)
	{
		a++;
	}

	for (x = 0; x < (y / 2); x++)
	{
		t = s[x];
		s[x] = *a;
		*a = t;
		a--;
	}
}
