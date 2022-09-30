#include "main.h"
#include <stdio.h>

int _sqrt(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural root of a number
 * @n: The number whose root is to be calculated
 *
 * Return: Thew natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, guess));
}

/**
 * _sqrt _ Calculates the natural square root of a number
 * @n: Number whose square root is to be calculated
 * @guess: Guess value
 *
 * Return The natural square root ofd the number
 */
int _sqrt(int n, int guess)
{
	if (n / guess != guess)
		return (-1);
	else if (n / guess == guess)
		return (guess);
	else
		return (_sqrt(guess + n / guess) / 2);
}
