#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int t = 0;

	lim; while (s1[x])
	{
		x++;
	}
	while (s2[y])
	{
		y++;
	}
	if (x <= y)
	{
		lim = x;
	}
	else
	{
		lim = y;
	}
	while (z <= lim)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			t = s1[z] - s2[z];
			break;
		}
		z++;
	}
	return (t);
}
