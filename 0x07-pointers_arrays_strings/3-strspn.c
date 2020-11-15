#include "holberton.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment
 * @accept: Bytes
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
int i;
int b;
for (i = 0; s[i] ; i++)
{
for (b = 0; accept[b] ; b++)
{
if (s[i] == accept[b])
{
a++;
break;
}
}
if (s[i] != accept[b])
{
break;
}
}
return (i);
}
