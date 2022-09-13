#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: Character to be checked
 * Return: 1 if c is a lowecase character and 0 if otherwise
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
