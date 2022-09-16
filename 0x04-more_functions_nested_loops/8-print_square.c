#include "main.h"
#include <stdio.h>

/**
 * print_square - Print line
 * @size: size of the square to be printed
 *
 * Return: empty
 */
void print_square(int size)
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
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

}

