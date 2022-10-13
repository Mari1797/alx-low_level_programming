#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Nme to be printed
 * @f: the pointer to the function
 *
 * Return: empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		return;

	f(name);
}
