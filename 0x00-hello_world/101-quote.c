#include <stdio.h>
#include <unistd.h>

/**
 *main-Entry point
 *
 *Return: An Integer of 0 Success in execution
 */

int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, text, strlen(text));
return (1);
}
