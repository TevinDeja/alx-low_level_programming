#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
int m = 48;
while (m < 58)
{
int n = m + 1;
while (n < 58)
{
putchar(m);
putchar(n);
if (m != 56)
{
putchar(',');
putchar(' ');
}
n++;
}
m++;
}
putchar('\n');
return (0);
}
