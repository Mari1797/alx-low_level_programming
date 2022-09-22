#include <stdio.h>

/**
 * main - Prints all possible combinations of 3 digits.
 *
 * Return: Always (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (c != 1 && c != 2)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');

	return (0);
}
