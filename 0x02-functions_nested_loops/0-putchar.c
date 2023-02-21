#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "main.h"

/**
 *main-Entry point
 *
 *Description: Check if an n is positive, zero or negative
 *
 *Return: An Integer of 1 Success in execution
 */
int main(void)
{
	int i;
	char *output = "_putchar";

	for (i = 0; i < (int)strlen(output); i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');
	return (0);
}