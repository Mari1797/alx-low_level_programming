#include "main.h"


/**
 * _isupper - check for uppercase character
 * @c: The letter to be checked
 *
 * Return: 1 if c is an uppercase character or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
