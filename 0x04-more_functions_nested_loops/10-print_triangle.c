#include "holberton.h"

/**
 * print_triangle - check the code.
 * @size: print triangle
 * Return: 0 Always
 */
void print_triangle(int size)
{
int a, d;

if (size <= 0)
{
_putchar('\n');
}
for (a = 0; a < size; a++)
{
for (d = 0; d < size; d++)
{
if (d >= size - a - 1)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
