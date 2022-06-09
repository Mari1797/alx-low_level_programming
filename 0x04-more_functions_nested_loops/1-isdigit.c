#include "main.h"


/**
 * _isdigit - checks for a digit (o through 9)
 * @x: the character to be checked
 *
 * Return: 1 if character is a digit or 0 if otherwise
 */
int _isdigit(int x)
{
	if (x >= 0 && x <= 9)
	{
		return (1);
	}

	return (0);
}
