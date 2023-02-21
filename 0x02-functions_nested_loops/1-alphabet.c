#include "main.h"

/**
* print_alphabet - prints the alphabet a-z int lower case ending it with a new line
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
