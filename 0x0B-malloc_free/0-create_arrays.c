#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates and initialises an array of chars
 * @size: Size of array
 * @c: the specific char used to initialise
 *
 * Return: NULL if size == 0 or program fails
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	if (size == 0)
		return (NULL);

	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);

	for (y = 0; y < size; y++)

		x[y] = c;

	return (x);
}
