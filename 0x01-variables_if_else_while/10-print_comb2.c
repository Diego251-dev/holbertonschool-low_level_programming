#include <stdio.h>
/**
 * main - Print Comb
 *
 * Return: 0 always (success)
 */
int main(void)
{
int a, b;
for (b = 0; b <= 9; b++)
{
for (a = 0; a <= 9; a++)
{
putchar (b + 48);
putchar (a + 48);
if (b != 9 || a != 9)
putchar (44);
if (b != 9 || a != 9)
putchar (32);
}
}
putchar(10);
return (0);
}
