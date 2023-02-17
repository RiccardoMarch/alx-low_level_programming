

#include <stdlib.h>
#include <time.h>
/* Return : 0 for success */

/* main - Entry point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is %s", n, ((n >= 0) ? ((n == 0) ? "zero" : "positive" ) : "negative"));
	return (0);
}