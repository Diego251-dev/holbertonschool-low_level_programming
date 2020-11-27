#include "holberton.h"
/**
 * factorial - Return the factorial of a given number
 * @n: The number
 * Return: n
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}