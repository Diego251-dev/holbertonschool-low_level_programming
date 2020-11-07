#include <unistd.h>
/**
 * main - Prints string
 * Description: Prints "\"Programming is like building a multilingual puzzle"
 * Return: 0
 */
int main()
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
return (1);
}