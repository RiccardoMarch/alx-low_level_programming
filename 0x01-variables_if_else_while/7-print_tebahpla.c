#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: output a-z alphabet in reverse and new line
 *
 *Return: An Integer of 0 Success in execution
 */
int main(void)
{
	char alpha = 'z';

	do {
		putchar(alpha);
		alpha--;
	} while (alpha >= 'a');
	putchar('\n');
	return (0);
}
