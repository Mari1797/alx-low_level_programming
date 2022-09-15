#include "main.h"

/**
 * print_numbers - numbers Print numbers from interval 0-9
 *
 * Return: Numbers of interval 0 to 9
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
