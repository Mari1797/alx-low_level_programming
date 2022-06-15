#include <stdio.h>

/**
 * main - Prints first fibonacci numbers
 *
 * Return: empty
 */
int main(void)
{
	int x = 0;
	long y = 1;
	long k = 2;

	while (x < 50)
	{
		if (x == 0)
			printf(", %ld", y);
		else
		{
			k += y;
			y = k - y;
			printf(", %ld", k);
		}

		++x;
	}

	printf("\n");
	return (0);
}
