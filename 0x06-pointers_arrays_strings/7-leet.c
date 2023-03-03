#include "main.h"

/**
* *leet - Encodes a string into 1337
* @s: pointer to string
* Return: the pointer to string
*/

char *leet (char *s)
{
	int j = 0;
	int index;
	int temp;
	char *low_letters = "aeotl";
	char *numbers = "43071";

	while (s[j] != '\0')
	{
		for (index = 0; index < 5; index++)
		{
			temp = s[j];
			if ((temp == low_letters[i]) || (temp == (low_letters[i] - 32)))
			{
				s[j] = numbers[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
