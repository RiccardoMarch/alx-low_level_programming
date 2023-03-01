#include "main.h"

/**
* _strcat - append string to the end of another string
* @dest: pointer to destination string
* @src: pointer to source string
* Return: the pointer of dest
*/

char *_strcat(char *dest, char *src)
{
	int offset = 0;
	int i = 0;

	do {
		offset++;
	} while (dest[offset] != '\0');

	for (; src[i] != '\0'; i++, offset++)
	{
		dest[offset] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}