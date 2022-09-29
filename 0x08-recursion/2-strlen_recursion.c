#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Strings whose length is to be returned
 *
 * Return: String's Length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return 1 + _strlen_recursion(s + 1)
}
