#include <stdio.h>
#include "main.h"

/**
 * main - Prints all the argument it recieves
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("\%s", argv[x]);
	}

	return (0);
}
