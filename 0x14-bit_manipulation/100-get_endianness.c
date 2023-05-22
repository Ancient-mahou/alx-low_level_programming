#include "main.h"

/**
 * get_endianness - Checks for endianness.
 * Return: 0 if little-endians and 1 if big-endian.
 */

int get_endianness(void)
{
	int a = 1;

	char *ch = (char *)&a;

	return ((*ch == 1) ? 1 : 0);
}
