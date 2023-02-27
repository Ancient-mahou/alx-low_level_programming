#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a:  pointer to an int
 *
 * @b:  pointer to another int
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
