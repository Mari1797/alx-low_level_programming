#include "main.h"

/**
 * print_alphabet - Prints lowercase letters
 *
 * Return: 0 Always
 */
void print_alphabet(void)
{
	char x;

	for (x >= 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');

	return (0);
}
