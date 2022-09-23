#include <stdio.h>

/**
 * main - Prints all possible combinations of two 2-digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 100; x++)
	{
		for (y = 0; y <= 100; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);

			if (x != 100 && y != 0)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
