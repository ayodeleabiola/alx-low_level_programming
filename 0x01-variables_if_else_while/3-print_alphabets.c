#include  <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Always an Entry point
 *
 * Return: Always not 0(Abiola)
 */
int main(void)
{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (lowercase = 'A'; lowercase <= 'Z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
