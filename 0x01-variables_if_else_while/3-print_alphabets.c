#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: output a-z alphabet lower and upper case and new line
 *
 *Return: An Integer of 0 Success in execution
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	do {
	putchar(lower);
	lower++;
	} while (lower <= 'z');

	do {
	putchar(upper);
	upper++;
	} while (upper <= 'Z');
	putchar('\n');
	return (0);
}
