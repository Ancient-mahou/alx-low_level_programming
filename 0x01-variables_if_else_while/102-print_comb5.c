#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints all possible combinations
 *		of two two-digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 = 48, x = 57;
	int num2, num3, num4;

	while (num1 <= x)
	{
		for (num2 = 48; num2 <= x; num2++)
		{
		for (num3 = 48; num3 <= x; num3++)
		{
		for (num4 = 48; num4 <= x; num4++)
		{
			if (num1 <= num3)
			{
				if (num1 == num3 && num2 >= num4)
				{
					continue;
				}
				putchar(num1);
				putchar(num2);
				putchar(32);
				putchar(num3);
				putchar(num4);
				if (num4 != x || num3 != x || num2 != x - 1 || num1 != x)
				{
				putchar(44);
				putchar(32);
				}

			}
		}
		}
		}
		num1++;
	}
	putchar(10);
	return (0);
}
