#include "main.h"

/**
 * set_bit - set every bit to 1
 * @n: does the job
 * @index: scan from 0 to the bit to set
 * Return: 1 if succes -1 if failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mibonacci;

	if (index > 64 || !n)
		return (-1);
	mibonacci = 1UL << index;
	*n |= mibonacci;
	return (1);
}
