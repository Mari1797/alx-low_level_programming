#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @size: size of an array
 * @cmp: function to a pointer
 * @array: array of integer
 *
 * Return: -1 if the element matches it size otherwise 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
