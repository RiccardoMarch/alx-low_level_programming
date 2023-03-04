#include "main.h"
/**
* rev_string - reverse the passed in string
* @str: pointer to a string
* Return: nothing
*/

void rev_string(char *str)
{
	int length, i;
	char *start_ptr, *end_ptr, temp;

	for (length = 0; str[length] != '\0'; length++)
		;

	start_ptr = str;
	end_ptr = str + length - 1;

	for (i = 0; i < length / 2; i++)
	{
		temp = (char)*end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = temp;

		start_ptr++;
		end_ptr--;
	}
}
