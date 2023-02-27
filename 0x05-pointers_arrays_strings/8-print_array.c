#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints elements of an array
 *
 * @a: a pointer to an array
 *
 * @n: number of elements ot the array to be printed
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	printf("\n");
}
