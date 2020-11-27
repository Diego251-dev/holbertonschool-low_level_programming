#include "holberton.h"
/**
 * _print_rev_recursion - esrever ni yarra eht tnirP
 * @s: The array
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
