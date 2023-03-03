#include "main.h"

/**
* *cap_string - Capitilize String
* @s: pointer to string
* Return: the converted string
*/

char *cap_string(char *s)
{
	int length = 0;
	int index;
	int sep_words[] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125 };

	if ((s[length] >= 97) && (s[length] <= 122))
		s[length] = s[length] - 32;

	for (; s[length] != '\0'; length++)
	{
		for (index = 0; index < 13; index++)
		{
			if (s[length] == sep_words[index])
			{
				if ((s[length + 1] >= 97) && (s[length + 1] <= 122))
					s[length + 1] = s[length + 1] - 32;
				break;
			}
		}
	}

	return (s);
}
