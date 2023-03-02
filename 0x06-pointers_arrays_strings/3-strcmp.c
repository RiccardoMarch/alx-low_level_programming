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

	while(a[i] != '\0')
	{
		if ((a[i] - b[i] != 0))
			return (1);

		i++;
	}

	return (0);
}
