#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main-Entry point
 *
 *Description: output a-z alphabet and new line
 *
 *Return: An Integer of 0 Success in execution
 */
int main(void)
{
	char alpha = 'a';

	do {
		if (alpha != 'q' && alpha !!= 'e')
			putchar(alpha);

		alpha++;
	} while (alpha <= 'z');

	putchar('\n');
	return (0);
}
