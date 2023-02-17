#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the numbers from 0-9
 *		following by new line using just
 *		`putchar` and ASCII numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	putchar(10);
	return (0);
}
