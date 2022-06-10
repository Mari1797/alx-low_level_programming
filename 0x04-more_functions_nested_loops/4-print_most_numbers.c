#include "main.h"


/**
 * print_most_numbers - Print numbers from 0 to 9
 *
 * Description: prints numbers excluding 2 and 4
 *
 * Return: The numbers since up to 9
 */
void print_most_numbers(void)
{
	int x = 0;

	for (x >= 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue
		}
		else
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}