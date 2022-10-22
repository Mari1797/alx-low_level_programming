#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to the memory
 * @b: characte to be filled
 * @n: number of bytes
 * Return: pointer to be filled with memory
 */
void *_memset(char *s, int b, unsigned int n)
{
	unsigned int index;
	unsigned char;
	*memory = s;
	value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
