

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* Return : 0 for success */

/* main - Entry point */
int main(void)
{
	int n;

	

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	char output[] = (n >= 0) ? "positive" : "negative";
	
	printf(" is %s", output);
	return (0);
}