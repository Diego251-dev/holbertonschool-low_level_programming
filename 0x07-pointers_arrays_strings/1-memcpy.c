#include "holberton.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @dest: dest from src
 * @src: src to dest
 * @n: string n
 * Return: _memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int c;
for (c = 0; c < n; c++)
{
dest[c] = src[c];
}
return (dest);
}
