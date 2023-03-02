#include "main.h"

/**
* _strcmp - compares value of A & B
* @a: pointer to string A
* @b: pointer to string B
* Return: the True if equal, else false
*/

int _strcmp(char *a, char *b)
{
	int i = 0;
    int result = 0;

	while(result == 0)
	{
		if ((a[i] == '\0') && (b[i] == '\0'))
			break;

        result = a[i] - b[i];
		i++;
	}

	return (result);
}
