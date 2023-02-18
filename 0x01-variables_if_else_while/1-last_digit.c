

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: Check if the last digit of an int is greater then 5, less or equal to zero
 *
 *Return: An Integer of 1 Success in execution
 */
int main(void)
{
	int n;
    int l_digit;
	char *output;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    l_digit = n % 10;
	/* Used tenary method to set value to the string variable */
	output = (l_digit <= 5) ? (l_digit == 0) ? "0" : "less than 6 and not 0" : "greater than 5";
	printf("Last digit of %d is %d and is %s\n", n, l_digit, output);
	return (0);
}
