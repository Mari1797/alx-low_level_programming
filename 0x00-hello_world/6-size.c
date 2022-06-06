
#include <stdio.h>


/**
 * main - Print the size of various types of computer compilation
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t;
	int x;
	long int y;
	long long int z;
	float p;

	
	printf("Size of a char: %d byte(s)\n", sizeof(t));
	printf("Size of an int: %d byte(s)\n", sizeof(x));
	printf("Size of a long int: %d byte(s)\n", sizeof(y));
	printf("Size of a long long int: %d byte(s)\n" sizeof(z));
	printf("Size of a float: %d byte(s)\n" sizeof(p));
	return (0);
}
