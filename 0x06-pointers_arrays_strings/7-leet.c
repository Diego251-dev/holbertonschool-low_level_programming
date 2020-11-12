#include "holberton.h"
/**
 * leet - Print the string in 1337
 * @a: input string
 * Return: a
 */
char *leet(char *a)
{
int i;
int j;
char c1[] = "aeotl";
char c2[] = "AEOTL";
char C[] = "43071";
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; c1[j] != '\0'; j++)
{
if (c1[j] == a[i] || c2[j] == a[i])
{
a[i] = C[j];
}
}
}
return (a);
}