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
for (i = 0; haystack[i]; i++)
{
for (k = i, j = 0; needle[j]; j++, k++)
{
if (haystack[k] != needle[j] || haystack[k] == '\0')
{
break;
}
}
if (needle[j] == 0)
{
return (needle);
}
}
return (0);
}
