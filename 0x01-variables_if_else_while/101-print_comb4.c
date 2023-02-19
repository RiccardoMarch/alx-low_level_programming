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
	int c;
	int offset = '0';

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10)
			{
				if (a == b && b == c || a > b && b > c)
					continue;

				putchar(offset + a);
				putchar(offset + b);
				putchar(offset + c);

				if ((a + b + c) >= 24)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
