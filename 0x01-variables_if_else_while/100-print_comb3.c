#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints all possible different
 *		combinations of two digits from 0-9
 *		following by comma and space and finally
 *		new line at the end using just `putchar`
 *		and ASCII numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (num2 != 57 || num1 != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
	}
	putchar(10);
	return (0);
}
