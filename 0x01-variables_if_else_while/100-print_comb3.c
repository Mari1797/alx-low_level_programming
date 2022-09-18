#include <stdio.h>

/**
 * main - Prints all possible combinations 0f two digits.
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);

				if (x != '8' || (x == '8' && y != '9')
				{
				putchar(',');

				putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
