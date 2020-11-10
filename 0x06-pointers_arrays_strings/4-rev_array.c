#include "holberton.h"
/**
 * reverse_array - print a Array in reverse
 * @a: Array
 * @n: Ret
 */
void reverse_array(int *a, int n)
{
int d;
int i;
int j;
for (i = 0, j = n - 1; i < j; i++, j--)
{
d = a[i];
a[i] = a[j];
a[j] = d;
}
}
