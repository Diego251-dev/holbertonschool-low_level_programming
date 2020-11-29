#include "holberton.h"
/**
 * prime_check - Check the numbers
 * @f: The variable Parameter
 * @p: The variable paremeter :p
 * Return: prime_check
 */
int prime_check(int f, int p)
{
if (p < 2 || p % f == 0)
return (0);
else if (f > p / 2)
return (1);
else
return (prime_check(f + 1, p));
}

/**
 * is_prime_number - prime number
 * @n: The veriable
 * Return: prime_check
 */
int is_prime_number(int n)
{
if (n == 2)
{
return (1);
}
return (prime_check(2, n));
}
