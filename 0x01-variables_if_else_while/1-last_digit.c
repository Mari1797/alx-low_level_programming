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
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit < 5)
	{
		printf("lastdigit of %d is %d and id greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("lastdigit of %d is %d and id is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("lastdigit of %d is %d and id is less than 6 and not 0\n", n, lastdigit);
	}

	return (0);
}
