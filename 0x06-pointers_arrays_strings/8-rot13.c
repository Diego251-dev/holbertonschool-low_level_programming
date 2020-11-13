#include "holberton.h"
/**
 * rot13 - Print the string in rot13
 * @a: input string
 * Return: a
 */
char *rot13(char *a)
{
int i;
int j;
char c1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char c2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; c1[j] != '\0'; j++)
{
if (a[i] == c1[j])
{
a[i] = c2[j];
break;
}
}
}
return (a);
}
