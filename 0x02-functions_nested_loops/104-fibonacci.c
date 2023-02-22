#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	unsigned long i, a = 1, b = 2;
	unsigned long result;

	printf("%lu, %lu, ", a, b);

	for (i = 2; i < 98; i++)
	{
		result = b + a;
		printf("%lu%s", result, (i == 97) ? "\n" : ", ");
		a = b;
		b = result;
	}
	return (0);
}
