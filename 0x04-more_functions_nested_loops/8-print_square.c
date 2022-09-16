#include "main.h"
#include <stdio.h>

/**
 * print_square - Print line
 * @n: no of lines to be printed
 * Return: void
 */
void print_square(int n)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

