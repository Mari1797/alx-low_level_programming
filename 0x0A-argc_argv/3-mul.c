#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Multiplies 2 numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 *
 * Return: 1 depending Argument count
 */
int main(int argc, char *argv[])
{
	int nm1;
	int nm2;
	int mul;

	nm1 = atoi(argv[1]);
	nm2 = atoi(argv[2]);

	mul = nm1 * nm2;


	printf("%d\n", mul);

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
