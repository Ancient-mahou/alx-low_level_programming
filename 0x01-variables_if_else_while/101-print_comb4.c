#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints all possible different
 *		combinations of three digits from 0-999
 *		following by comma and space and finally
 *		new line at the end using just `putchar`
 *		and ASCII numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num3 != 57 || num2 != 56 || num1 != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
