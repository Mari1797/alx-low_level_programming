#include <stdio.h>


/**
 * main - Prints base 10 digits,followed by a  new line*
 * Return: Always (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c < '10'; c++)
		printf("%d", c);

	printf("\n");

	return (0);
}

