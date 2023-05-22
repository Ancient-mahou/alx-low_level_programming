#include "main.h"

/**
 * flip_bits - flip bits to go across numbers
 * @n: does the job
 * @m: does the  job 2
 * Return: value
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	int y = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;
	int number = sizeof(unsigned long int) * 8 - 1;

	for (x = number; x >= 0; x--)
	{
		a = b >> x;
		if (a & 1)
			y++;
	}
	return (y);
}

