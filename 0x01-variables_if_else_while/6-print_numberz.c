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
	char num = '0';

	do {
		putchar(num);
		num++;
	} while (num < '10');

	putchar('\n');
	return (0);
}
