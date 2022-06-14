#include "main.h"

/**
 * swap_int - Swap the value of 2 integers
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int xy = *a;
	*a = *b;
	*b = xy;
}
