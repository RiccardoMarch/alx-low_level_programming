#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: output hexadecimal base16 1-9 A-F
 *
 *Return: An Integer of 0 Success in execution
 */
int main(void)
{
	int n = 0;
	char a_to_f = 'a';

	do {
	putchar(n);
	n++;
	} while (n <= 9);

	do {
	putchar(a_to_f);
	a_to_f++;
	} while (a_to_f <= 'f');
	putchar('\n');
	return (0);
}
