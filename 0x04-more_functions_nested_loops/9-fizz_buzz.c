#include <stdio.h>

/**
 * main - Print FizzBuzz
 * Return: Always
 */
int main(void)
{
int i;

for (i = 1; i <= 99; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("EnTuCara ");
else if (i % 3 == 0)
printf("EnTu ");
else if (i % 5 == 0)
printf("Cara ");
else
printf("%i ", i);
}
printf("Cara\n");
return (0);
}
