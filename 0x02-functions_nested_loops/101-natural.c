#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	int i, result = 0;

	for (i = 0; i < 1024; i++)
		result += ((i % 5) == 0 || (i % 3) == 0) ? i : 0;

	printf("%d\n", result);
	return (0);
}
