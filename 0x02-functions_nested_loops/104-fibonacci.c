#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	int i, overflow;
	unsigned long a = 1, b = 2;
	unsigned long result;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 93; i++)
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

	for (; i < 99; i++)
	{
		printf(", %lu%lu", b_head + (b_tail / 1000000000), b_head % 1000000000);

		b_head = b_head + a_head;
		a_head = b_head - a_head;
		b_tail = b_tail + a_tail;
		a_tail = b_tail - a_tail;
	}

	printf("\n");

	return (0);
}
