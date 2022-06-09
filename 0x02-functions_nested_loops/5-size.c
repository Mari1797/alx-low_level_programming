#include "main.h"


/**
 * print_sign - Prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1,-1 or 0 depending on sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
