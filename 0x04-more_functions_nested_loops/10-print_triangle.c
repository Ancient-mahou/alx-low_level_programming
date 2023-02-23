#include "main.h"

/**
 * print_triangle - check the code
 *
 * @size: the size of the triangle
 *
 * Return: return nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			if (i != 0)
			{
				for (j = size; j > i; j--)
					_putchar(32);
				for (k = 0; k < i; k++)
					_putchar(35);
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
