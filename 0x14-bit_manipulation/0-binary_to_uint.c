#include "main.h"

/**
 * binary_to_uint - function to convert binary to uns int
 * @b: to be converted
 * Return: 1 if converted 0 if NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	unsigned int y = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] == '0' || b[x] == '1')
		{
			y <<= 1;
			y += b[x] - '0';
			x++;
		}
		else
			return (0);
	}
	return (y);
}
