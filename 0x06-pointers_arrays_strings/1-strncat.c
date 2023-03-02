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
	if(n == 0)
		return (dest);

	while (*dest != 0)
		dest++;

	do {
		if((*dest = *src++) == 0)
			break;
		
		dest++;
	} while(--n > 0);

	*dest = 0;

	return (dest);
}
