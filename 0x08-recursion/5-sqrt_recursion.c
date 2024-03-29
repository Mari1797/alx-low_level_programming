#include "main.h"


int find_sqrt(int n, int guess);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the square root of the number.
 * @n: The number whose root is to be calculated
 * @guess: Guess value
 *
 * Return: The number's square root if n has a natural square root otherwise -1
 */
int find_sqrt(int n, int guess)
{
	if ((guess * guess) == n)
		return (guess);

	else if (guess == n / 2)
		return (-1);

	else
		return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square of a number
 * @n: Number whose square root is to be calculated
 *
 * Return: The natural square root ofd the number
 */
int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (find_sqrt(n, guess));
}
