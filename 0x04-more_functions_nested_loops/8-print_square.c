#include "main.h"

/**
 * print_square - check the code
 *
 * @size: size of the square
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar(35);
			for (j = 1; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
