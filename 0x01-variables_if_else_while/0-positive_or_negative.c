

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* Return : 0 for success */

/*main-Entry point */
int main(void)
{
	int n;
	char *output;
	

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	output = (n >= 0) ? (n == 0) ? "zero" : "positive" : "negative";
	
	printf("%d is %s\n", n, output);
	return (0);
}
