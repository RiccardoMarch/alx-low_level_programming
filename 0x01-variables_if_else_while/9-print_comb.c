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
	int i;
	int offset = '0';

	for (i = offset; i < (offset + 10); i++) {
		putchar(i);
		if (i == (offset + 9))
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
