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
	int index;
	int a;
	int b;
	int offset = '0';
	int size = 100;
	/**
	* Below I've just used a single loop instead of using another nested loop
	* it's a bit more complex to understand but quite familiar in storing
	* a 2D array in a 1D array eg. floatbufferarrays uses only 1D arrays
	*/
	for (index = 0; index < (size * size); index++)
	{
		a = (int)(index / size);
		b = (index % size);

		if (a < b)
		{
			putchar(offset + (int)(a / 10));
			putchar(offset + (int)(a % 10));
			putchar(' ');
			putchar(offset + (int)(b / 10));
			putchar(offset + (int)(b % 10));

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
