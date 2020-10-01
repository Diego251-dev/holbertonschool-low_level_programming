#include <stdio.h>
/**
 * main - Print Base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
for (a = 0; a <= 9; a++)
putchar(a + 48);
for (a = 'a'; a <= 'f'; a++)
putchar (a);
putchar('\n');
return (0);
}
