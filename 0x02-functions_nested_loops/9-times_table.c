#include "main.h"

/**
* times_table - void
* Description: Prints the times table
* Return: Nothing
*/


void times_table(void)
{
	int x;
	int y;
	int val;
	int count;
	int index;
	int max_digits = 3;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			if (x == 0) {
				putchar((x * y) + '0'); // value stays zero
				putchar(',');
			}

			val = x * y;
			count = snprintf(NULL, 0, "%i", val);

			for (index = 0; index < (max_digits - count); index++)
			{
				putchar(' ');
			}
			putchar(val + '0');
			putchar(',');
		}
		_putchar('\n');
	}
}