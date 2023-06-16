#include "main.h"

/**
 * malloc_checked - memory allocation
 * @b: the size of memory
 * Return: returns a pointer if success, otherwise exit98
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (!memory)
	{
		exit(98);
	}
	return (memory);
}
