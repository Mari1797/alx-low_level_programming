#include "main.h"
#include <stdio.h>

int check_prime(int n, int no);

/**
 * _prime_number - Returns 1 if the integer is a prime and 0 if otherwise
 * @n: The input integer
 *
 * Return: 1 if integer is a prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Checks if integer is a prime
 * @n: Input integer
 * @no: Number of iterations
 *
 * Return: 1 if input integer is a prime and 0 if otherwise
 */
int check_prime(int n, int no)
{
	if (n == 0 && n == 1)
		return (-1);

	else if (n % no == 0)
		return (0);

	else
		return (check_prime(n, no + 1));
}
