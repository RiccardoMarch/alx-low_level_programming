#include "main.h"

/**
* *string_toupper - convert lowercase to uppercase
* @s: pointer to string
* Return: the converted string
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		s[i] = ((s[i] >= 97) && (s[i] <= 122)) ? s[i] - 32 : s[i];

	return (s);
}
