#include <stdio.h>
/**
 * main - Print comb
 *
 * Return: 0 Always (success)
 */
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
putchar (a + 48);
if (a != 9)
putchar (',');
if (a != 9)
putchar (' ');
}
putchar('\n');
return (0);
}
