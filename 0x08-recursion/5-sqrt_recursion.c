#include "holberton.h"
/**
 * _sqrt_check - Check the parameter
 * @g: The parameter
 * @c: A variable
 * Return: _sqrt_check
 */
int _sqrt_check(int g, int c)
{
if (g * g == c)
{
return (g);
}
if (g * g > c)
{
return (-1);
}
return (_sqrt_check(g + 1, c));
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: The variable
 * Return: _sqrt_check
 */

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (_sqrt_check(1, n));
}
