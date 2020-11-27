#include "holberton.h"
/**
 * _strlen_recursion - Return the length of String
 * @s: The string
 * Return: The length of String
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
