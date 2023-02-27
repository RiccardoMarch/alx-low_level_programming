#include "main.h"
#include <stdlib.h>
/**
* puts2 - prints out char pointer and skips a char
* @str: pointer to a string
* Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; (str[i] != '\0') && (i % 2 == 0); i++)
		_putchar(str[i]);

	_putchar('\n');
}
