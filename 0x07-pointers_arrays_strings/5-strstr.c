#include "holberton.h"
/**
 * _strstr - locate the substring needle
 * @haystack: Locate
 * @needle: Substring
 * Return: needle or 0
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int k;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j]; j++)
{
for (k = 0; haystack[i] <= needle[j]; k++)
{
if (needle[j] != k)
{
return (needle);
}
}
}
if (haystack[i] == needle[j])
{
return (0);
}
}
return (0);
}
