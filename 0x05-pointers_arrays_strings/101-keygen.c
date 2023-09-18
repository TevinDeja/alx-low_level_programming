#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid password
 *
 * Return: Always 0
 */

int main(void)
{
	int passWd[100];
	int n, sum, m;

	sum = 0;

	srand(time(NULL));

	for (n = 0; n < 100; n++)
	{
		passWd[n] = rand() % 78;
		sum += (passWd[n] + '0');
		putchar(passWd[n] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}
	return (0);
}
