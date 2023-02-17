#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the alphabet in lowercase
 *		and uppercase following by new line
 *		using just `putchar` and ASCII numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	char L;

	for (L = 97; L <= 122; L++)
		putchar(L);
	for (L = 65; L <= 90; L++)
		putchar(L);
	putchar(10);
	return (0);
}
