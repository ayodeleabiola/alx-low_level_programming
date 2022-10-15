#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - ALways the C starting point
 *
 * Return: Not ALlways 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print("%d", i);
	}
	print("\n");
	return (0);
}
