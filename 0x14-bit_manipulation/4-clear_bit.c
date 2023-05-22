#include "main.h"

/**
 * clear_bit - clears a bit in unsigned long int
 * @n: does the job
 * @index: scan from 0 to the bit to set
 * Return: 1 if succes -1 if failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mibonacci;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	else
	{
		mibonacci = ~(1 << index);
		*n = *n & mibonacci;
	}
	return (1);
}
