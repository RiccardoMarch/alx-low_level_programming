#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long a = 1, b = 2;
	unsigned long result;
	long a_head, a_tail, b_head, b_tail;
	printf("%lu, %lu", a, b);

	for (i = 2; i < 91; i++)
	{
		result = b + a;
		
		a = b;
		b = result;
		printf(", %lu", result);
	}

	a_head = a / 1000000000;
	a_tail = a % 1000000000;

	b_head = b / 1000000000;
	b_tail = b % 1000000000;

	for (i = 93; i < 100; i++)
	{
		
		b_head = b_head + a_head;
		a_head = b_head - a_head;
		b_tail = b_tail + a_tail;
		a_tail = b_tail - a_tail;

		printf(", %lu%lu", b_head + (b_tail / 1000000000), b_head % 1000000000);

	}

	printf("\n");

	return (0);
}
