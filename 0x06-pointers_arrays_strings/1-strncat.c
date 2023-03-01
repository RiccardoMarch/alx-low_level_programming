#include "main.h"

/**
* *_strncat - append string to the end of another string
* @dest: pointer to destination string
* @src: pointer to source string
* Return: the value of dest
*/


char *_strncat(char *dest, char *src, int n)
{
	int offset = 0;
	int i = 0;

	do {
		offset++;
	} while (dest[offset] != '\0');

	do {
		dest[offset] = src[i];

		if (src[i] == '\0')
			break;

		offset++;
		i++;
	} while(i < n);

	dest[offset] = '\0';
	
	return (dest);
}
