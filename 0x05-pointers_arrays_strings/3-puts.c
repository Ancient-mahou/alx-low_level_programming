#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: a pointer to a string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
