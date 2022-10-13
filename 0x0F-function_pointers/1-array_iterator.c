#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * @size: size of array
 * @action: pointer to the function
 * @array: array to coded
 *
 * Return: empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
	}
}
