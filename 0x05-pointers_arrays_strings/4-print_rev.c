#include "main.h"
/**
* print_rev - prints out the passed in string in reverse
* @str: pointer to a string
* Return: nothing
*/

void print_rev(char *s)
{
	int length = _strlen(*s);

	for (length--; length >= 0; length--)
		_putchar(s[length]);
	
	_putchar('\n');
}
