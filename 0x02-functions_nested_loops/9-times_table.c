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
		putchar(0);

		for (m = 0; m <= 9; m++)
		{
			putchar(',');
			putchar(' ');

			pd = n * m;

			if (pd <= 9)
				putchar(' ');
			else
				putchar((pd / 10) + 0);

			putchar((pd % 10) + 0);
		}
		putchar('\n');
	}
}
