#include "main.h"


/**
 * print_line - Draws a striaght line in the terminal
 * @n: The number of lines to be drawn
 *
 * Return: empty
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(88);
		}

		_putchar('\n');
	}
}
