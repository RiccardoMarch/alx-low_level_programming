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
	int low_letters[] = { 97, 101, 111, 116, 108 };
	int numbers[] = { 52, 51, 48, 55, 49 };

	while (s[j] != '\0')
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
		j++;
	}

	return (s);
}
