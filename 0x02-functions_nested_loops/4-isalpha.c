#include "main.h"


/**
 * _isalpha - checks for alphatical lower and uppercase characters
 * @c: character to be checked
 * Return: 1 if c is lower or uppercase character or 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
