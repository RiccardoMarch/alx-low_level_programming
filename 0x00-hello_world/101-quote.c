#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *main-Entry point
 *
 *Description: It prints Dor's quote
 *
 *Return: An Integer of 1 Success in execution
 */

int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int fd = 2;
int length = strlen(text);
write(fd, text, length);
return (1);
}
