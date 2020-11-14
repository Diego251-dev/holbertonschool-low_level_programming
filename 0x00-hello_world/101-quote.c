#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints string
 * Description: Prints "\"Programming is like building a multilingual puzzle"
 * Return: 0
 */
int main(void)
{
write(0, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
return (1);
}