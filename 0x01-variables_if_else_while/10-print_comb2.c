#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits.
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, i;

	n = i = '0';

        for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(n);
			putchar(i);

			if ((n != '9') || (n == '9' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
