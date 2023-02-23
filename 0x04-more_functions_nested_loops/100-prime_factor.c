#include <stdio.h>

/**
 * main - the fizz buzz program
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	int i;

	while (i++ < num / 2)
	{
		if (num % i == 0)
		{
			num /= 2;
			continue;
		}

		for (i = 3; i < num / 2; i += 2)
		{
			if (num % i == 0)
				num /= i;
		}
	}
	printf("%ld\n", num);
	return (0);
}
