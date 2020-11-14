#include "holberton.h"
/**
 * _memset - constand byte
 * @s: pointed variable
 * @b: constant byte
 * @n: function fills the first
 * Return: _memset
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int c;
for (c = 0; c < n; c++)
{
s[c] = b;
}
return (s);
}
