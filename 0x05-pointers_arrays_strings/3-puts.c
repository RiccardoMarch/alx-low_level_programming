#include "main.h"
/**
* _puts - prints out the passed in string
* @str: pointer to a string
* Return: nothing
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
