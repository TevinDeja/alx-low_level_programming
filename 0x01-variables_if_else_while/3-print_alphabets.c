#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase and then in uppercase
 *
 * Return: Always  0
 */
int main(void)
{
int i = 97, t = 65;
while (i < 123)
{
putchar(i);
i++;
}
while (t < 91)
{
putchar(t);
t++;
}
putchar('\n');
return (0);
}
