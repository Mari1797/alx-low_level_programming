#include "main.h"

/**
 * rev_string - Reverses a string
 *@s: string to be reversed
 *
 * Return: Reverse a string
 */
void rev_string(char *s)
{
	char s[10] = "Uniport";

	printf("%s\n", s);

	rev_string(s);

	printf("%s\n", s);

	return (0);
}
