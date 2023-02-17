#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the numbers from 0-9 and the alphabet
 *		in lowercase a-f following by new line using just
 *		`putchar` and ASCII numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	char L;

	for (L = 48; L <= 102; L++)
	{
		putchar(L);
		if (L == 57)
			L += 39;
	}
	putchar(10);
	return (0);
}
