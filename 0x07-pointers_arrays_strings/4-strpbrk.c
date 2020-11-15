#include "holberton.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: string
 * @accept: string
 * Return: i
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
s = 0;
return (0);
}
