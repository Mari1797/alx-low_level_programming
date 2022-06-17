#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: an array of integers
 * @n: no of elements
 *
 * Return: no of elements
 */
void reverse_array(int *a, int n)
{
	int *p;
	int i;
	int aux;
	int k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
