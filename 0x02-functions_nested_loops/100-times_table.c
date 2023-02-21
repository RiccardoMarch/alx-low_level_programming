#include "main.h"
#include <stdio.h>
/**
* times_table - void
* Description: Prints the times table & it's flexible
* you can change max_count & table_size without any issues
* Return: Nothing
*/
void print_times_table(int size)
{
    if (size > 15 || size <= 0)
        return;

	int x, y, val, count, i, n;
	/** max_count the amount of spaces between commas */
	/** table_size the size of the table 10x10, 20x20, 30x30 will work the same*/
	int max_count = 4, table_size = size + 1;

	for (y = 0; y < table_size; y++)
	{
		_putchar('0');
		_putchar(',');
		for (x = 1; x < table_size; x++)
		{
			n = 1;
			val = x * y;
			count = snprintf(NULL, 0, "%i", val);
			for (i = 0; i < (max_count - count); i++)
				_putchar(' ');

			for (i = 1; i < count; i++)
				n *= 10;

			for (i = 0; i < count; i++)
			{
				_putchar((int)(val / n) + '0');
				val = (val - ((int)(val / n) * n));
				n /= 10;
			}
			if (x != (table_size - 1))
				_putchar(',');
		}
		_putchar('\n');
	}
}
