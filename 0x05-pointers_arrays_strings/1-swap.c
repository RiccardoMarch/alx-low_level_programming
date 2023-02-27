#include "main.h"
/**
* swap_int - it swaps the value of the passed int args
* @a: pointer value to swap with @b
* @b: pointer value to swap with @a
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
