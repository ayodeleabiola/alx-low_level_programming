#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - An entry point
 *
 * Return: Not always 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit < '10'; digit++)
	{
		putchar((digit % 10)) + '0');
	}
	putchar('\n');
	return (0);
}
