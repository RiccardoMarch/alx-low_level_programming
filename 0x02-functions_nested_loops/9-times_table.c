#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
	int i;
	int n = 1;
	int k;
	int max_count = 4;
	int table_size = 15;

	for (y = 0; y < table_size; y++)
	{
		for (x = 0; x < table_size; x++)
		{
			if (x == 0) {
				/* x * y = 0, x is 0 */
				_putchar((x * y) + '0');
				_putchar(',');
				continue;
			}
			n = 1;
			val = x * y;
			count = snprintf(NULL, 0, "%i", val);

			for (i = 0; i < (max_count - count); i++)
				_putchar(' ');

			for (i = 1; i < count; i++)
				n *= 10;

			for (i = 0; i < count; i++)
			{
				k = (int)(val / n);
				_putchar(k + '0');
				val = (val - (k * n));
				
				if (i + 1 < count)
					n /= 10;
			}

			if(x != (table_size - 1))
				_putchar(',');
		}
		_putchar('\n');
	}
}