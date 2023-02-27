#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: a password
 */
int main(void)
{
	char pswd[84];
	int i = 0;
	int sum = 0;
	int a, b;

	srand(time(0));

	while (sum < 2772)
	{
		pswd[i] = 33 + rand() % 94;
		sum += pswd[i++];
	}
	pswd[i] = '\0';
	if (sum != 2772)
	{
		a = (sum - 2772) / 2;
		b = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			a++;
		for (i = 0; pswd[i]; i++)
		{
			if (pswd[i] >= (33 + a))
			{
				pswd[i] -= a;
				break;
			}
		}
		for (i = 0; pswd[i]; i++)
		{
			if (pswd[i] >= (33 + b))
			{
				pswd[i] -= b;
				break;
			}
		}
	}
	printf("%s", pswd);
	return (0);
}
