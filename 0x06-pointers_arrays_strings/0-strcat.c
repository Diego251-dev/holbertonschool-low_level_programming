#include <stdio.h>
#include "holberton.h"

/**
* _strcat - The source
*@src: integer *
*@dest: integer *
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (int b = 0; src[b] != '\0'; b++, i++)
{
dest[i] = src[b];
}
return (dest);
}