

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: Check if an n is positive, zero or negative
 *
 *Return: An Integer of 1 Success in execution
 */
 
int main(void)
{
	int n;
	char *output;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Used tenary method to set value to the string variable */
	output = (n >= 0) ? (n == 0) ? "zero" : "positive" : "negative";
	printf("%d is %s\n", n, output);
	return (0);
}
