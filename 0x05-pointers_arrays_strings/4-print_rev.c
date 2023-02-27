#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 *
 * @s: a pointer to a string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

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

	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
