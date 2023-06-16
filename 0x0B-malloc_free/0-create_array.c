#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating an array of characters
 * @size: array's size
 * @c: the character
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i;

	if (size == 0)
		return (NULL);

	n = malloc(sizeof(c) * size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		n[i] = c;

	return (n);
}
