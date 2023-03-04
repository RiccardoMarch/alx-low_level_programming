#include "main.h"
/**
* print_rev - prints out the passed in string in reverse
* @str: pointer to a string
* Return: nothing
*/

void print_rev(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	for (length--; length >= 0; length--)
		_putchar(str[length]);

	_putchar('\n');
}
