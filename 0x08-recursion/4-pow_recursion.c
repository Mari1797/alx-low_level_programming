#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The number to be raised
 * @y:  the power
 *
 * Return: the value of x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 1)
		return (-1);

	else if (y == 0)
		return (x);
	else
		return (x *= y);

}
