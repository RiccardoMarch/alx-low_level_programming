#include "main.h"
#include <stdio.h>
/**
* _strcpy - copies the string pointer to a new pointer
* @dest: pointer to destination string
* @src: pointer to source string
* Return: the pointer of dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		if (src[i] == '\0')
			break;

		i++;
	} while (i >= 0);

	return (dest);
}
