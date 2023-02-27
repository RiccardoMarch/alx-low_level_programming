#include "main.h"
#include <stdlib.h>
/**
* puts_half - prints out char pointer from the middle
* @str: pointer to a string
* Return: nothing
*/

void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
		;

	for (i = (length / 2); i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}