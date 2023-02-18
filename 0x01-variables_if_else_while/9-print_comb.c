#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: output a-z alphabet and new line
 *
 *Return: An Integer of 0 Success in execution
 */
int main(void)
{
	int n = 0;

	do {
		putchar(n);
		if (n != 9) {
			putchar(',');
			putchar(' ');
		}

		n++;
	} while (n <= 9);

	putchar('\n');
	return (0);
}
