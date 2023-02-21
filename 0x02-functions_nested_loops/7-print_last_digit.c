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
	int val = (n < 0) ? (-1 * n): n;
	int count = snprintf(NULL, 0, "%i", val);

	printf("%d \n", val);
	printf("%d", val%10);

	return (0);
}
