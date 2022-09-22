#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: Always (Success)
 */
void times_table(void)
{
	int x;
	int m;
	int pd;

	for (x = 0; x <= 9; x++)
	{

		_putchar(0);

		for (m = 1; m <= 9; m++)
		{

			_putchar(' ');

			pd = x * m;

			if (pd <= 9)
				_putchar(' ');
			else
				_putchar((pd / 10) + 0);

			_putchar((pd % 10) + 0);
		}
		_putchar('\n');
	}
}
