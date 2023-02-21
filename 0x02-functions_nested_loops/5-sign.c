#include "main.h"

/**
* print_sign - prints the sign of the value
* @c: parameter value that's been passed in
* Description: prints the sign of the value
* Return: 0 if == 0, 1 if > 0, -1 if < 0
*/

int print_sign(int c)
{
	_putchar((c >= 0) ? ((c == 0) ? '0' : '+') : '-');
	return ((c >= 0) ? ((c == 0) ? 0 : 1) : -1);
}
