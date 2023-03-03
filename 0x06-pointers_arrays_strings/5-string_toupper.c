#include "main.h"

/**
* *string_toupper - convert lowercase to uppercase
* @s: pointer to string
* Return: the converted string
*/

char *string_toupper(char *s)
{
	int index = 0;

	while(s[index] != '\0')
	{
		if((s[index] >= 97) && (s[index] <= 122))
			s[index] = s[index] - 32;

		index++;
	}

	return (s);
}
