#include "main.h"
#include <stdio.h>

/**
 * *_strcpy -a function that copies the string pointed to by src
 *
 * @dest: a pointer to a buffer
 *
 * @src: a pointer to a string
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
