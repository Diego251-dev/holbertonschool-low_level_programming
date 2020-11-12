#include "holberton.h"

/**
 * cap_string - Print the string in lowercase
 * @a: input string
 * Return: a
 */
char *cap_string(char *a)
{
int b;
int c;
int separators[] = {',', ';', '.', '?', '"',
'(', ')', '{', '}', ' ', '\n', '\t'};
int valor = 32;
for (b = 0; a[b] != '\0'; b++)
{
if (a[b] >= 'a' && a[b] <= 'z')
{
a[b] = a[b] - valor;
}
valor = 0;
for (c = 0; c <= 12; c++)
{
if (a[b] == separators[c])
{
c = 12;
valor = 32;
}
}
}
return (a);
}
