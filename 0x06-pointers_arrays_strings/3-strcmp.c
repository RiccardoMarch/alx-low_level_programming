#include "main.h"

/**
* _strcmp - compares value of A & B
* @a: pointer to string A
* @b: pointer to string B
* Return: an integer either True or False 
*/

int _strcmp(char *a, char *b)
{
	int i, result;

	i = 0;
	result = 0;

	while (result == 0)
	{
		if ((a[i] == '\0') || (b[i] == '\0'))
			break;

		result = (a[i] - b[i]);
		i++;
	}

	return (result);
}
