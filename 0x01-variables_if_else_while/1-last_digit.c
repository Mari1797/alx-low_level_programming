#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a random number to a random variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (n > 5)
	{
		printf("ld of %d is %d and id greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
		printf("ld of %d is %d and id is 0\n", n, ld);
	}
	else if (n < 6 && n != 0)
	{
		printf("ld of %d is %d and id is less than 6 and not 0\n", n, ld);
	}

	return (0);
}
