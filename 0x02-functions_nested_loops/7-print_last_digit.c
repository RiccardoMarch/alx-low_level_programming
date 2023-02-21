#include "main.h"

/**
* print_last_digit - prints the last digit
* @n: parameter value that's been passed in
* Return: the last digit
*/

int print_last_digit(int n)
{
	char *val = '0' + n;
	int size = strlen(val);

	_putchar(*val[size-1]);

	return ((int)val[size-1]);
}
