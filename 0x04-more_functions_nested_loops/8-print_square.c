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

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
