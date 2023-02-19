#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: output 0-9 numbers and new line
 *
 *Return: An Integer of 0 Success in execution
 */
int main(void)
{
	int i;
	int offset = '0';

	for (i = offset; i < (offset + 10); i++)
		putchar(i);

	putchar('\n');
	return (0);
}
