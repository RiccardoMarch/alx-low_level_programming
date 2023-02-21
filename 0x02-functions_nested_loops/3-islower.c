#include "main.h"

/**
* _islower - Checks if value is a lowercase alphabet
* @c: parameter value that's been passed in
* Description: function checks if input is lowercase
* Return: 1 if is lowercase or 0 if is uppercase or numeric
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;

	return 0;
}