#include "main.h"

/**
 * puts2 - a function that prints even characters
 *
 * @str: a pointer to a string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int c = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	_putchar('\n');
}
