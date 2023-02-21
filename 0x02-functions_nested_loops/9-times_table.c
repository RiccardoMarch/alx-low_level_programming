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
	int index;
	int max_digits = 3;
	int n = 1;
	int k;

	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 2; x++)
		{
			if (x == 0) {
				/* x * y = 0, x is 0 */
				_putchar((x * y) + '0');
				_putchar(',');
			}

			n = 1;

			val = x * y;
			count = snprintf(NULL, 0, "%i", val);

			printf("Value :{%d}\n", val);
			printf("Count :{%d}\n", count);

			for (index = 0; index < (max_digits - count); index++)
			{
				_putchar(' ');
			}

			index = 1;
			for (index = 1; index < count; index++)
			{
				n *= 10;
			}

			index = 0;

			for (index = 0; index < count; index++)
			{
				k = (int)(val / n);
				printf("K :{%d}", k);
				_putchar(k + '0');
				val = (val - (k * n));
				
				if (index + 1 < count)
					n /= 10;
			}

			_putchar(',');
		}
		_putchar('\n');
	}
}