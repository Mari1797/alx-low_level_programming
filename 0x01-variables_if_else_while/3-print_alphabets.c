
#include <stdio.h>


/**
 * main - Prints alphabets in lower and then in uppercase
 *
 * Return: Always (Success)
 */
int main(void)O
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
