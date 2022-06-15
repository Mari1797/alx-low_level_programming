#include "main.h"

/**
 * print_most_numbers - Prints numbers of interval 0-9
 *
 * Description: Prints numbers 0-9 except 2 & 4
 *
 * Return: Printed numbers
 */
void print_most_numbers(void)
{
	int y = 0;                  
											for (; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}

	_putchar('\n');
}
