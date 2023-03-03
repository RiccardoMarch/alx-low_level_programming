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

	for (i = 0; (a[i] != '\0') && (result == 0); i++)
		result = (a[i] - b[i]);

	return (result);
}
