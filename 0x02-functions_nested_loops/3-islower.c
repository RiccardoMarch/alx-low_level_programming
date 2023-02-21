#include "main.h"

/**
* _islower - Checks if value is a lowercase alphabet
*/

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;

    return 0;
}