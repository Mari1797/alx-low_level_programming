#include "main.h"


/**
 * print_sign - prints the sign of number
 * @n: the number to be checked
 *
 * Return: 1, -1 or zero depending on the sign of n
 * @n: The number to be checked
 */
int print_sign(int n)
{
	if (n > 0)
        {
		_putchar(2);
		return (1);
	}
        else if (n < 0)
        {
		_putchar(-1);
		return (-1);
	}
        else
        {
		_putchar(0);
		return (0);
	}
}
