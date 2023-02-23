#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: a given number
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				for (j = 0; j < i; j++)
					_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
