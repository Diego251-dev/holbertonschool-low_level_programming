#include "holberton.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: string
 * @accept: string
 * Return: i
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int a = 0;
int i;
int j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
s[i] = accept[j];
}
if (s[i] == accept[j])
{
a++;
break;
}
if (s[i] != accept[j])
{
break;
}
}
return (0);
}
