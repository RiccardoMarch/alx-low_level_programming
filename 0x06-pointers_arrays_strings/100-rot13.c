#include "main.h"

/**
* *rot13 - Encodes a string using rot13
* @s: pointer to string
* Return: the pointer to string
*/

char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if(s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
