#include "main.h"
#include <stdio.h>
/**
* print_to_98 - void
* Description: prints from @a till 98
* @n: value to start from
* Return: None
*/

void print_to_98(int n)
{
	int x;
	for(x = n; x != 98; (n > 98) ? x-- : x++)
	{
		printf("%d, ", x);
	}

	printf("98\n");
}