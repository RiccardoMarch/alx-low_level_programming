#include "main.h"

/**
* _isalpha - Checks if value is an alphabet
* @c: parameter value that's been passed in
* Description: function checks if input is a alphabet
* Return: 1 if is alphabet or 0 if not
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
