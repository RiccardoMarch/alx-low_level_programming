#include <stdio.h>
#define MAX_LONG 10000000000
/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long a1 = 1, a2 = 2, b1 = 0, b2 = 0;
	unsigned long c1, c2, c3;

	printf("%lu, %lu, ", a1, a2);

	for (i = 2; i < 98; i++)
	{
		if(a1 + a2 > MAX_LONG || b2 > 0 || b1 > 0)
		{
			c1 = (a1 + a2) / MAX_LONG;
			c2 = (a1 + b2) % MAX_LONG;
			c3 = b1 + b2 + c1;

			b1 = b2;
			b2 = c3;
			a1 = a2;
			a2 = c2;
			printf("%lu%010lu", b2, a2);
		}
		else 
		{
			c2 = a1 + a2;
			a1 = a2;
			a2 = c2;
			printf("%lu", a2);
		}

		if(count != 97)
			printf(", ");
	}

	printf("\n");

	return (0);
}
