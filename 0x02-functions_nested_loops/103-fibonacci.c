#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	long int i, a = 1, b = 2, result, sum;

	for (i = 0; i < 49; i++)
	{
		result = ((sum % 2 == 0) && (sum <= 4000000)) ? result + b : result;
		sum = a + b;
		a = b;
		b = sum;
	}

	printf("%ld\n", result);

	return (0);
}
