#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of diagnonals
 * @a: The matrix
 * @size: The size
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int temp;
int diag1 = 0;
int diag2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
temp = (size * i) + j;
if (i == j)
{
diag1 = diag1 + a[temp];
}
if ((i + j) ==  (size - 1))
{
diag2 = diag2 + a[temp];
}
}
}
printf("%d, %d\n", diag1, diag2);
}
