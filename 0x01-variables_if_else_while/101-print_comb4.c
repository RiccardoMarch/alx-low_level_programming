#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: 
 *
 *Return: An Integer of 0 Success in execution
 */
int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = 0; hundred <= 9; hundred++) {
		for (ten = (hundred + 1); ten <= 9; ten++) {
			for (one = (ten + 1); one <= 9; one++) { 
				putchar(hundred);
				putchar(ten);
				putchar(one);

				if (hundred != 7 && ten != 8 && one != 9) {
					putchar(',');
					putchar(' ');
                }
            }
        }
	}

	putchar('\n');
	return (0);
}
