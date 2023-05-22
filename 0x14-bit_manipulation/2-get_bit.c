#include "main.h"

/**
 * get_bit - to return the value of a given bit
 * @n: does the job
 * @index: scan the value in 0
 * Return: value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

