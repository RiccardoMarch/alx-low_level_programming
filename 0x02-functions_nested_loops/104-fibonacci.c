#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	unsigned long int i, a = 1, b = 2;
	unsigned long int result;

	printf("%d, %d, ", a, b);

	for (i = 2; i < 98; i++)
	{
		result = b + a;
		printf("%ld%s", result, (i == 97) ? "\n" : ", ");
		a = b;
		b = result;
	}
	return (0);
}
