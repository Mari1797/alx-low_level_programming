#include "main.h"


/**
 * _islower - Check if c is a lower character
 * @c: The character to be checked 
 *
 * Return: 1 if c is a lower character or 0 if c isd not a lowercharacter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
