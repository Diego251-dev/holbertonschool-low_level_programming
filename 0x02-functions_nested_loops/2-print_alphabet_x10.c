#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet_x10
 */
void print_alphabet_x10(void)

{
char a;
for (a = 0; a <= 10; a++)
{
char b;
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
