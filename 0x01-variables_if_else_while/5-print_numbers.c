#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints numbers from 0-9
 *		followerd by new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar(10);
	return (0);
}
