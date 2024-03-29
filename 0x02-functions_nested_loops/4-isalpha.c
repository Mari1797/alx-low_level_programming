#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 is c is an alphabet character and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
