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
	int ones;
	int tens;
	int offset = '0';

	for (tens = 0; tens < 9; tens++) 
	{
		for (ones = 0; ones < 10; ones++) 
		{
			putchar(offset + tens);
			putchar(offset + ones);

			if (tens == 8 && ones == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
