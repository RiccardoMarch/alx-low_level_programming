#include "main.h"
#include <stdio.h>
/**
* print_array - prints @size elements of an integer array
* @array: pointer to an integer array
* @size: length that will be printed
* Return: nothing
*/

void print_array(int *array, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf((i != (size - 1) ? "%d, " : "%d"), *(a + i));

	printf("\n");
}
