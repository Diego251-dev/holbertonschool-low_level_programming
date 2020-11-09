#include "holberton.h"
/**
* _strncat - The source
*@src: integer *
*@dest: integer *
*@n: n
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

for (j = 0; dest[j] != '\0'; j++)
{
}
for (i = 0; src[i] != '\0' && (i < n); i++)
{
dest[i + j] = src[i];
}
return (dest);
}
