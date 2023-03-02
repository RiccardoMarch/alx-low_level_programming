#include "main.h"

/**
* _strncpy - cpoies string to another string
* @dest: pointer to destination string
* @src: pointer to source string
* @n: length of bytes to append
* Return: the value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}