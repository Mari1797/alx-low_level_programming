#include <stdio.h>


/**
 * main - Prints base 16 numbers in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar("%d", c);
	}

	putchar('\n');

	return (0);
}

