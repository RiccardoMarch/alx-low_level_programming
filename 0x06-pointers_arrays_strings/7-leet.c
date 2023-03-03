#include "main.h"

/**
* *leet - Encodes a string into 1337
* @s: pointer to string
* Return: the pointer to string
*/

char *leet (char *s)
{
	int j;
	int index;
	int temp;
	int low_letters[] = { 97, 101, 111, 116, 108 };
	int numbers[] = { 52, 51, 48, 55, 49 };

	for (j = 0; s[j] != '\0'; j++)
	{
		for (index = 0; index < 5; index++)
		{
			temp = s[j];
			if(temp == low_letters[i] || temp == (low_letters[i] - 32))
			{
				s[j] = numbers[i];
				break;
			}
		}
	}

	return (s);
}
