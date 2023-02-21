#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_last_digit - prints the last digit
* @n: parameter value that's been passed in
* Return: the last digit
*/

int print_last_digit(int n)
{
	char *val = "" + n;
	int size = strlen(val);

	_putchar(*val[size-1]);

	return ((int)val[size-1]);
}
