#include "main.h"
#include <stdio.h>
/**
* _atoi - converts string to integer
* @str: pointer to a string
* Return: the pointer of dest
*/

int _atoi(char *str)
{
	int i = 0, length = 0, s = 1;
	unsigned int = 0;
	
	do {
		if (length > 0 && (str[i] > '9' || str[i] < '0'))
			break;

		s *= (str[i] == '-') ? -1 : 1;

		if (str[i] >= '0' && str[i] <= '9') {
			if (result > 0)
				result *= 10;

			result += *(str + i);
			length++;
		}

		i++;
	} while (str[i] != '\0');

	return ((result == 0) ? 0 : (result * s));
}