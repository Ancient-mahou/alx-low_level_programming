#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int zx;
	char *cb;

	zx = 1;
	cb = (char *) &zx;

	return ((int)*cb);
}
