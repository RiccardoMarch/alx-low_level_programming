#include "main.h"
#include <stdio.h>
/**
* _atoi - converts string to integer
* @str: pointer to a string
* Return: the pointer of dest
*/

int _atoi(char *str)
{
	int i = 0, length = 0, s = 1, result = 0;

	do {
		if (length > 0 && (s[i] > '9' || s[i] < '0'))
			break;

		s *= (s[i] == '-') -1 : 1;

		if (s[i] >= '0' && s[i] <= '9') {
			if (result > 0)
				result *= 10;

			result += *(s + i);
			length++;
		}

		i++;
	} while (s[i] != '\0');

	return ((result == 0) ? 0 : (result * s));
}