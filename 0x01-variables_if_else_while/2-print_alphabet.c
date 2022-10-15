#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Always an entry point
 *
 * Return: can't be zero always
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
        putchar("\n");
	return (0);
}
