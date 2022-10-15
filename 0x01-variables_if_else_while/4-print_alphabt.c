#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Always the starting line
 *
 * Return: Always or sometimes 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}
	putchar('\n');
	return (0);
}
