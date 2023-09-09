#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int r, s, t;

	for (r = 48; r < 58; r++)
	{
		for (s = 49; s < 58; s++)
		{
			for (t = 50; t < 58; t++)
			{
				if (t > s && s > r)
				{
					putchar(r);
					putchar(s);
					putchar(t);
					if (r != 55 || s != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
