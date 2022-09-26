#include "main.h"

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

	len = strlen(str1)

	for (index = 0, index < len / 2, index++)
	{
		temp = str1[index];
		str1[index] = str1[len - index - 1];
		str1[len - index - 1] = temp;
	}
}
