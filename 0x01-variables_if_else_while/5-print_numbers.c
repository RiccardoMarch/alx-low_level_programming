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
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (num < 10);

	putchar('\n');
	return (0);
}
