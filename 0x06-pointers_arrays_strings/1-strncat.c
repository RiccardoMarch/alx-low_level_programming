#include "main.h"

/**
* _strncat - append string to the end of another string
* @dest: pointer to destination string
* @src: pointer to source string
* @n: length of bytes to append
* Return: the value of dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int offset = 0;
	int i = 0;

	while (dest[offset] != '\0')
		offset++;

	do {
		dest[offset] = src[i];
		offset++;
		i++;
	} while(i < n && src[i] != '\n');

	//dest[offset] = '\0';

	return (dest);
}
