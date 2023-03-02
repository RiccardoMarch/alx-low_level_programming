#include "main.h"
#include <stdio.h>
/**
* reverse_array - reverse an integer array
* @array: pointer to integer array
* @n: size of array
* Return: Nothing
*/

void reverse_array(int *array, int n)
{
	int i = 0;
	int temp;

	n = n - 1;

	do {
		temp = array[i];
		array[i] = array[n];
		array[n] = temp;
		i++;
		n--;
		
	} while (i < (n / 2));

	print_array(array, n);
}
