#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s:String to be reversed
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int index;
	int len;
	int temp;

	len = strlen(s);

	for (index = 0; index < len / 2; index++)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	}
}
