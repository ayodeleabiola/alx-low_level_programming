#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting point
 *
 * Return: 0
 */
int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
