#include "main.h"

/**
* jack_bauer - void
* Description: Prints every minute from 00:00 til 23:59
* Return: Nothing
*/


void jack_bauer(void)
{
	int i;
	int h;
	int m;

	for (i = 0; i < (24 * 60); i++)
	{
		h = (int)(i / 60);
		m = (i - (h * 60));

		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
	}
}