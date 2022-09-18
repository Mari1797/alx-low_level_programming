#include <stdio.h>


/**
 * main - Prints base 10 digits,followed by a  new line*
 * Return: Always (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

	return (0);
}

