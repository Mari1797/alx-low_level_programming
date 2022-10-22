#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to the memory
 * @c: characte to be filled
 * @n: number of bytes
 * Return: pointer to be filled with memory
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char;
	*memory = s;
	value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
