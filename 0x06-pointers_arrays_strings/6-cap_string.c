#include "holberton.h"
/**
 * cap_string - Changue the array
 * @a: string
 * Return: Pointer
 */
char *cap_string(char *a)
{
int j;
for (j = 0; a[j] != '\0'; j++)
{
if (a[j] >= 'A' && a[j] <= 'Z')
{
a[j] = a[j] + 32;
}
}
return (a);
}
