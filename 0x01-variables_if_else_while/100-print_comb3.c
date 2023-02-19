#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description:
 *
 *Return: An Integer of 0 Success in execution
 */
int main(void)
{
	int a;
	int b;
	int offset = '0';

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == b && a > b)
				continue;

			putchar(offset + b);
			putchar(offset + a);

			if ((a + b) == 17)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
