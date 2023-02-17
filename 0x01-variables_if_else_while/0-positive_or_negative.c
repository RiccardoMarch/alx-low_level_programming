

#include <stdlib.h>
#include <time.h>
/* Return : 0 for success */

/* main - Entry point */
int main(void)
{
	int n;

	char output[] = (n >= 0) ? "positive" : "negative";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf(" is %s", output);
	return (0);
}