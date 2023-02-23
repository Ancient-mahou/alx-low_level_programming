#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *
 *@c: a given character
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else if (c >= 97 && c < 123)
		return (0);
	return (0);
}
