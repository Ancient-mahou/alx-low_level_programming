#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;
	int num[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 48, 49, 50, 51, 52};

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 15 ; i++)
		{
			if (i > 9)
				_putchar(49);
		_putchar(num[i]);
		}
		_putchar('\n');
	j++;
	}
}
