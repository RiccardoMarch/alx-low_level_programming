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

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			if (x == 0) {
				/* x * y = 0, x is 0 */
				_putchar((x * y) + '0');
				_putchar(',');
			}

			val = x * y;
			count = snprintf(NULL, 0, "%i", val);

			for (index = 0; index < (max_digits - count); index++)
			{
				_putchar(' ');
			}
			_putchar(val + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}