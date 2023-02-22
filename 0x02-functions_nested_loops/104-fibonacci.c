#include <stdio.h>
#define MAX_LONG 10000000000
/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long int b1 = 1, b2 = 2, a1 = 0, a2 = 0;
	unsigned long int c1, c2, c3;

	printf("%lu, %lu, ", b1, b2);

	for (i = 2; i < 98; i++)
	{
		if(b1 + b2 > MAX_LONG || a2 > 0 || a1 > 0)
		{
			c1 = (b1 + b2) / MAX_LONG;
			c2 = (b1 + b2) % MAX_LONG;
			c3 = a1 + a2 + c1;

			a1 = a2, a2 = c3;
			b1 = b2, b2 = c2;
			printf("%lu%010lu", a2, b2);
		}
		else 
		{
			c2 = b1 + b2;
			b1 = b2, b2 = c2;
			printf("%lu", b2);
		}

		if(i != 97)
			printf(", ");
	}

	printf("\n");

	return (0);
}
