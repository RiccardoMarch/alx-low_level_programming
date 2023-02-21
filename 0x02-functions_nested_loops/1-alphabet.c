#include "main.h"

/**
* print_alphabet - prints the alphabet a-z in lowercase and a new line
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
