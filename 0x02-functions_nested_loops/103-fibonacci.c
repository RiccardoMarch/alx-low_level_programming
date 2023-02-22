#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	long int a = 1, b = 2, sum = 2;

	do {
		b += a;
		sum += (b % 2 == 0) ? b : 0;
		a = b - a;
	} while (b + a < 4000000);

	printf("%ld\n", sum);

	return (0);
}
