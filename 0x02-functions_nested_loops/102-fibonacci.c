#include <stdio.h>

/**
* main - Entry point
* Return: 0 (Success)
*/

int main(void)
{
	int i, a = 1, b = 2;
    int result[50];

    result[0] = a;
    result[1] = b;

    for (i = 2; i < 50; i++)
    {
        result[i] = result[i - 1] + result[i - 2];
        printf("%d%s", result[i], (i == 59) ? "\n" : ", ");
    }
	return (0);
}