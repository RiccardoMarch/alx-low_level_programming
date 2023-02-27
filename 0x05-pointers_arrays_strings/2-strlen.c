#include "main.h"
/**
* _strlen - it calculates the length of a char pointers
* @s: pointer to a string
* Return: string length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
