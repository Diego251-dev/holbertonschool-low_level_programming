#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Prints string
 * Description: Prints "\"Programming is like building a multilingual puzzle"
 * Return: 0
 */
int main(void)
{
const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, str, strlen(str));
}