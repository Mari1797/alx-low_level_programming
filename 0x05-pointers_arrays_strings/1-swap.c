#include "main.h"

/**
 * swap_int - swap the values of 2 integers
 *
 * @a: ist integer
 * @b: 2nd integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
