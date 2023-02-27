#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 *
 * @s: a pointer to a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
		{
			break;
		}
		else
		{
			c++;
		}
	}
	return (c);
	return (0);
}
