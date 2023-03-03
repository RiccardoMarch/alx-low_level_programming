#include "main.h"

/**
* *leet - Encodes a string into 1337
* @s: pointer to string
* Return: the pointer to string
*/

char *leet(char *s)
{
	int length;
	int index;
	int temp;

	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	for (length = 0; s[length] != '\0'; length++)
	{
		for (index = 0; index < 5; index++)
		{
			temp = s[length];
			if(temp == low_letters[i] || temp == upp_letters[i])
			{
				s[length] = numbers[i];
				break;
			}
		}
	}

	return (s);
}
