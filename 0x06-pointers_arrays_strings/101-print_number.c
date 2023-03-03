#include "main.h"

/**
* *rot13 - Encodes a string using rot13
* @n: an integer variable
* Return: nothin
*/

void print_number(int n)
{
	unsigned int m, d, index;

	m = (n < 0) ? n * -1 : n;
	
	if (n < 0)
		_putchar('-');

	d = m;
	index = 1;

	while (d > 9) {
		d /= 10;
		index *= 10;
	}

	for (; index >= 1; index /= 10)
	{
		_putchar(((m / index) % 10) + 48);
	}
}
