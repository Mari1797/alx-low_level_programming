#include <stdio.h>

/**
 * main - Prints the sum of all multiples 0f 3 & 5 to 1024
 *
 * Return: (Success)
 */
int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}

		x++;
	}

	printf("%d\n", y);
	return (0);
}
